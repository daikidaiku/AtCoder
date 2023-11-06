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
    string s = "";
    rep(i,n+1){
        for(int j = 1; j < 10; j++){
            if(s.size() <= i){
                if(n % j == 0 && i % (n/j) == 0){
                    s += (char)j + '0';
                }
                else if(j == 9){
                    s += '-';
                }
            }
        }
    }
    cout << s << endl;
    return 0;
}