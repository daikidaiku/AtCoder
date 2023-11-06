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
    int n;
    int x;
    cin >> n >> x;
    int a[n+1];
    rep2(i,1,n+1) cin >> a[i];
    int res[n+1];
    rep2(i,1,n+1) res[i] = 0;
    int ans = 0;
    while (res[x] == 0){
        res[x] = 1;
        x = a[x];
        ans++;
    }

    cout << ans << endl;
    return 0;
}