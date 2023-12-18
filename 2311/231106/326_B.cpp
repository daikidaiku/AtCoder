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
    int n;
    cin >> n;
    
    int i = 0;
    while (true){
        string n_str = to_string(n);
        if((n_str[i]-'0') * (n_str[i+1]-'0') == n_str[i+2]-'0'){
            cout << n << endl;
            break;
        }
        n++;
    }
    return 0;
}