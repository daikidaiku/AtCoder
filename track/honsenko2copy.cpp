#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();


// vector<string> split(string& input, char delimiter)
// {
//     istringstream stream(input);
//     string field;
//     vector<string> result;
//     while (getline(stream, field, delimiter)) {
//         result.push_back(field);
//     }
//     return result;
// }

std::vector<std::string> split(std::string str, char del) {
    std::vector<std::string> result;
    std::string subStr;

    for (const char c : str) {
        if (c == del) {
            result.push_back(subStr);
            subStr.clear();
        }else {
            subStr += c;
        }
    }

    result.push_back(subStr);
    return result;
}

int main(int argc, char *argv[]) {
  // このコードは標準入力と標準出力を用いたサンプルコードです。
  // このコードは好きなように編集・削除してもらって構いません。
  // ---
  // This is a sample code to use stdin and stdout.
  // Edit and remove this code as you like.

  string line;
  vector <vector <string> > res;
  int index = 0;
  while (!cin.eof()) {
    getline(cin, line);
    // if (line == "") break;
    res.push_back(split(line,',')); 
    index++;
    // cout << "line[" << index++ << "]:" << line << "\n";
  }

  

  vector<string> prefecture;
  vector<vector<string> > shop;
  vector<vector<int>> amount;

  // rep (i, 47) {

  //       shop[i] = vector<string>();
  //   }

  rep(i,index){
    string target = res.at(i).at(0);
    bool found1 = find(prefecture.begin(), prefecture.end(), target) != prefecture.end();
    if(!found1){
        prefecture.push_back(target);
        shop.push_back(vector<string>());
    }
    vector<string>::iterator itr1 = find(prefecture.begin(), prefecture.end(), target);
    int id = distance(prefecture.begin(),itr1);

    string shopName = res.at(i).at(1);
    bool found2 = find(shop[id].begin(), shop[id].end(), shopName) != shop[id].end();
    if(!found2){
        shop[id].push_back(shopName);
    }
    vector<string>::iterator itr2 = find(shop[id].begin(), shop[id].end(), shopName);
    int shName = distance(shop[id].begin(),itr2);
    int a = stoi(res.at(i).at(2));

    if (id >= amount.size()) {
        amount.resize(id + 1, vector<int>(100, 0));
    }
    if (shName >= amount[id].size()) {
        amount[id].resize(shName + 1, 0);
    }

    // amount[id][shName] += a;
    // int b = amount[id][shName];
    amount[id][shName] += a;



    
    // cout << id << " " << shName << " " << amount[id][shName] << endl;
    

  }
  
  int n_pre = prefecture.size();
  int sum = 0;

  rep(i,n_pre){
    int n_shop = shop[i].size();
    int pre_sum = 0;
    cout << "* " << prefecture[i] << endl;
    rep(j,n_shop){
      cout << shop[i][j] << " " << amount[i][j] << endl;
      pre_sum += amount[i][j];
    }
    cout << prefecture[i] << "合計 " << pre_sum << endl;
    sum += pre_sum;
  }

  cout << "全国合計 " << sum << endl;
  
  return 0;
}