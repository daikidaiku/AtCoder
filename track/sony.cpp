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
    int n, m;
    cin >> n >> m;
    
    string restaurant_id[m];
    int restaurant_x[m], restaurant_y[m],restaurant_setFree[m],restaurant_setMin[m];
    rep(i,m){
        cin >> restaurant_id[i] >> restaurant_x[i] >> restaurant_y[i];
        restaurant_setFree[i] = 1000000;
        restaurant_setMin[i] = 0;
    }

    string line_date, line_time, line_val, line_id, line;
    int line_price, line_x, line_y;

    vector<string> order_date, order_time, order_val, order_id, order_holiday;
    vector<int> order_price, order_x, order_y;
    while (!cin.eof()) {
        cin >> line_date; order_date.push_back(line_date);
        cin >> line_time; order_time.push_back(line_time);
        cin >> line_val; order_val.push_back(line_val);
        cin >> line_id; order_id.push_back(line_id);
        cin >> line_price; order_price.push_back(line_price);
        if (line_val == "order"){
            cin >> line_x; order_x.push_back(line_x);
            cin >> line_y; order_y.push_back(line_y);
            order_holiday.push_back("");
        }else if (line_val == "close_day" || line_val == "open_day"){
            order_x.push_back(0);
            order_y.push_back(0);
            cin >> line; order_holiday.push_back(line);
        }    
        else{
            order_x.push_back(0);
            order_y.push_back(0);
            order_holiday.push_back("");
        }
        
    }
    order_date.pop_back();
    order_time.pop_back();
    order_val.pop_back();
    order_id.pop_back();
    order_price.pop_back();
    order_x.pop_back();
    order_y.pop_back();
    
    int k = order_date.size();
    vector<int> order_priceSum(k);
    bool iferror[k], restaurant_status = true;
    bool weekStatus[7];
    rep(i,7) weekStatus[i] = true;

    

    rep(i,k){
        iferror[i] = false;
        auto itr = find(restaurant_id, restaurant_id + m, order_id[i]);
        int index = distance(restaurant_id, itr);
        
        
        
        if (order_val[i] == "order" && restaurant_status){
            if(order_price[i] < restaurant_setMin[index]){
                iferror[i] = true;
            }
            int cost;
            int dis = 0;
            dis = sqrt(abs(order_x[i] - restaurant_x[index])*abs(order_x[i]- restaurant_x[index]) + abs(order_y[i]-restaurant_y[index])* abs(order_y[i]-restaurant_y[index]));
            if (order_price[i] >= restaurant_setFree[index]) cost = 0;
            else if (dis < 100) cost = 300;
            else if (dis < 1000) cost = 600;
            else if (dis < 10000) cost = 900;
            else cost = 1200;
            order_priceSum[i] = order_price[i] + cost;
        }
        else if (order_val[i] == "set_free"){
            restaurant_setFree[index] = order_price[i]; 
        }
        else if (order_val[i] == "set_min"){
            restaurant_setMin[index] = order_price[i]; 
        }else if (order_val[i] == "close_day" && order_holiday[i] == "HOLIDAY"){
          restaurant_status = false;
        }else if (order_val[i] == "open_day"&& order_holiday[i] == "HOLIDAY") {
          restaurant_status = true;
        }
        
    }


    rep(i,k){
        if (order_val[i] == "order"){
            if (iferror[i]){
                cout << order_date[i]  << " " << order_time[i] << " ERROR INSUFFICIENT"  << endl;
            }else{
                cout << order_date[i]  << " " << order_time[i] << " " <<  order_priceSum[i] << endl;
            }
        }
    }


        
    return 0;
}