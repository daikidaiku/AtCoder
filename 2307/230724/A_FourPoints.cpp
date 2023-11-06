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
    int x[3], y[3], ans[2];
    rep(i,3) cin >> x[i] >> y[i];
    if (x[0] == x[1]) ans[0] = x[2];
    else if (x[1] == x[2]) ans[0] = x[0];
    else ans[0] = x[1];

    if (y[0] == y[1]) ans[1] = y[2];
    else if (y[1] == y[2]) ans[1] = y[0];
    else ans[1] = y[1];

    cout << ans[0] <<  " " << ans[1] << endl;
    
    return 0;
}