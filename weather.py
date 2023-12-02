# 0 9 * * *  python ./Documents/weather.py

import requests
from bs4 import BeautifulSoup
import datetime
import schedule
import time
import re

info = requests.get("https://tenki.jp/forecast/3/16/4410/13209/") # 好きな市町村のURLにしてもよいです
bs = BeautifulSoup(info.content, "html.parser")

today = bs.find(class_="today-weather")
l = bs.find("h2").text
d=l.find("の天気")
location=l[0:d]
weather = today.find(class_="weather-telop").string
high_temp = today.find_all(class_="value")[0].string
low_temp = today.find_all(class_="value")[1].string
message = "今日の"+ location + "の天気は" + weather + "、最高気温は{}℃".format(high_temp) + "、最低気温は{}℃です。".format(low_temp)
message
headers = {"Authorization": "Bearer " + "U3ceQpK6iS8P9B3jCRTcqRxCTBZajfyXizQ0bEwAyOw"}
payload = {"message": message}
r = requests.post("https://notify-api.line.me/api/notify", headers=headers, params=payload,)


print(bs.find("h2").text)

print(location)

#U3ceQpK6iS8P9B3jCRTcqRxCTBZajfyXizQ0bEwAyOw

