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
    string a[n];
    rep(i,n) cin >> a[i];

    bool res = true;

    rep2(i,0,n){
        rep2(j,i+1,n){
            if(!((a[i][j] == 'W' && a[j][i] == 'L') || (a[i][j] == 'L' && a[j][i] == 'W') || (a[i][j] == 'D' && a[j][i] == 'D'))){
                res = false;
            }
        }
    }
    if(res)cout << "correct" << endl;
    else cout << "incorrect" << endl;

    
    return 0;
}