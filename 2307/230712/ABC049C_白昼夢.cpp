#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main()
{
  string S;
  cin >> S;

  reverse(all(S));
  rep(i, 4) reverse(all(divide[i]));
  bool can = true;
  int Ss = S.size();
  for (int i = 0; i < Ss;){
    bool can2 = false;
    rep(j,4){
      string d = divide[j];
      if (S.substr(i, d.size()) == d){
        can2 = true;
        i += d.size();
      }
    }
    if (!can2){
      can = false;
      break;
    }
  }
  if(can) cout << "YES" << endl;
  else cout << "NO" << endl;
  return 0;
}