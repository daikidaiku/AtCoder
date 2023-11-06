#include <bits/stdc++.h>
using namespace std;
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
    string c[n], d[m];
    int p[m+1];
    rep(i,n) cin >> c[i];
    rep(i,m) cin >> d[i];
    rep(i,m+1) cin >> p[i];

    int ans = 0;

    rep(i,n){
        int j = 0;
        while (j < m){
            if (c[i] == d[j]) {
                break;
            }
            j++;
        }
        if(j < m){
            ans += p[j+1];
        }else{
            ans += p[0];
        }

    }
    cout << ans << endl;
    return 0;
}