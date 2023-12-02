#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;

int main()
{
  int step;
  cin >> step;

  if(step == 1){
    int n_menu;
    cin >> n_menu;

    vector<int> dish(n_menu), stock(n_menu), price(n_menu);
    rep(i,n_menu) cin >> dish[i] >> stock[i] >> price[i];

    string s;
    vector<string> line;
    int x;
    vector<int> table;
    vector<int> d;
    vector<int> n;
    int index = 0;
    while (!cin.eof()) {

      cin >> s; line.push_back(s);
      cin >> x; table.push_back(x);
      cin >> x; d.push_back(x);
      cin >> x; n.push_back(x);
      index++;
    }

    rep(i,index-1) {
      vector<int>::iterator itr = find(dish.begin(), dish.end(), d[i]);
      int id = distance(dish.begin(),itr);
      
      if (stock[id] >= n[i]){
        rep(j,n[i]){
          stock[id] -= 1;
          cout << "received " << line[i] << " " << table[i] << " " << d[i] << endl;
        }
      }else{
        cout << "sold out " << table[i] << endl;
      }
      
    }
  }else if (step == 2){
    int n_menu, n_oven;
    cin >> n_menu >> n_oven;

    vector<int> dish(n_menu), stock(n_menu), price(n_menu);
    rep(i,n_menu) cin >> dish[i] >> stock[i] >> price[i];

    int index = 0;
    vector<int> job;
    queue<int> waiting;

    while (!cin.eof()) {
      string res;
      cin >> res;
      if (res == "received"){
        string order;
        int table, d;
        cin >> order;
        cin >> table >> d;
        vector<int>::iterator itr = find(dish.begin(), dish.end(), d);
        int id = distance(dish.begin(),itr);
        waiting.push(d);
        if (job.size() < n_oven){
            job.push_back(waiting.front());
            waiting.pop();
            cout << d << endl;
        }else{   
          cout << "wait" << endl;
        }
      }else if (res == "complete"){
        int d;
        cin >> d;
        vector<int>::iterator itr = find(job.begin(), job.end(), d);
        if(itr != job.end()){
          int id = distance(job.begin(),itr);
          job.erase(job.begin()+id);

          if(waiting.size() != 0){
            job.push_back(waiting.front());
            cout << "ok " << waiting.front() << endl;
            waiting.pop();
          }else{
            cout << "ok" << endl;
          }
        }else{
          cout << "unexpected input" << endl;

        }
      }else{
        break;
      }
      index++;
    }
  }else if (step == 3){
    int n_menu;
    cin >> n_menu;
    vector<int> dish(n_menu), stock(n_menu), price(n_menu);
    rep(i,n_menu) cin >> dish[i] >> stock[i] >> price[i];

    vector<int> making;
    vector<int> table_mak;
    while (!cin.eof()) {
      string res;
      cin >> res;
      
      if (res == "received"){
        string order;
        int table, d;
        cin >> order >> table >> d;
        making.push_back(d);
        table_mak.push_back(table);
      }else if (res == "complete"){
        int d;
        cin >> d;
        vector<int>::iterator itr = find(making.begin(), making.end(), d);
 
          int id = distance(making.begin(),itr);
          cout << "ready " << table_mak[id] << " " << d << endl;
          making.erase(making.begin()+id);
          table_mak.erase(table_mak.begin()+id);
      }else{
        break;
      }
    }


  }else if (step == 4){
    int n_menu;
    cin >> n_menu;
    vector<int> dish(n_menu), stock(n_menu), price(n_menu);
    rep(i,n_menu) cin >> dish[i] >> stock[i] >> price[i];

    vector<int> making;
    vector<int> table_mak;
    int sum[10010]={};
    while (!cin.eof()) {
      string res;
      cin >> res;

      if (res == "received"){
        string order;
        int table, d;
        cin >> order >> table >> d;
        making.push_back(d);
        table_mak.push_back(table);
      }else if (res == "ready"){
        int table, d;
        cin >> table >> d;
        vector<int>::iterator itr = find(making.begin(), making.end(), d);
          
          int id = distance(making.begin(),itr);
          making.erase(making.begin()+id);
          table_mak.erase(table_mak.begin()+id);

          vector<int>::iterator itr2 = find(dish.begin(), dish.end(), d);
          int id2 = distance(dish.begin(),itr2);
          sum[table] += price[id2];
      }else if (res == "check"){
        int table;
        cin >> table;
        bool found = find(table_mak.begin(), table_mak.end(), table) != table_mak.end();
        if(found){
          cout << "please wait" << endl;
        }else{
          cout << sum[table] << endl;
          sum[table] = 0;
        }
      }else{
        break;
      }
    }
  }
  return 0;
}