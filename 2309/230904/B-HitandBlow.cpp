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
    ll a[n], b[n];
    rep(i,n)cin >> a[i];
    rep(i,n)cin >> b[i];

    int res1 = 0, res2 = 0;
    rep(i,n){
        rep(j,n){
            if(i == j && a[i] == b[j])res1++;
            else if (a[i] == b[j])res2++;
        }
    }
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}