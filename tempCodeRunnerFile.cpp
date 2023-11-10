#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int daysInYear, daysInMonth, daysInWeek;
    string date;
    cin >> daysInYear >> daysInMonth >> daysInWeek >> date;
    
    if(daysInMonth >=100 || daysInYear/daysInMonth>= 100){
        cout << -1 << endl;
        return 0;
    }

    int year, month, day;
    year = (date[0] -'0')*1000 + (date[1]-'0')*100 + (date[2] -'0')* 10 + date[3]-'0';
    month = (date[5]-'0')*10+date[6]-'0';
    day = (date[8]-'0')*10+date[9]-'0';


    if(day > daysInMonth){
        cout << -1 << endl;
        return 0;
    }
    vector<char> week(daysInWeek);
    rep(i,daysInWeek){
        week[i] = 'A'+i;
    }
    int uru = daysInYear % daysInMonth;
    int monthInYear = daysInYear / daysInMonth;
    bool res = false;

    int uruCount = 0, monthCount, dayCount = 0;
    rep(i, year-1){
        dayCount += monthInYear * daysInMonth;
        uruCount += uru;
        if(daysInMonth <= uruCount){
            uruCount -= daysInMonth;
            dayCount += daysInMonth;
        }
    }
    if(daysInMonth <= uruCount + uru) res = true;


    rep(i,month-1){
        dayCount += daysInMonth;
    }
    dayCount += day;
    if(res && month > monthInYear + 1){
        cout << -1 << endl;
        return 0;
    }else if (!res && month > monthInYear){
        cout << -1 << endl;
        return 0;
    }else if(res && monthInYear >=99){
        cout << -1<< endl;
        return 0;
    }else{
        dayCount--;
        dayCount %= daysInWeek;
        cout << week[dayCount] << endl;
    }
    return 0;
}