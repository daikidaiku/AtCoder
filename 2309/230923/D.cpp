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
    int n, m, p;
    cin >> n >> m >> p;
    vector<int> a(n), b(m);
    for(int &i: a) cin >> i;
    for(int &i: b) cin >> i;
    sort(all(b));
    vector<ll> b_sum(m+1);
    rep(i,m) {
        b_sum[i+1] = b_sum[i] + b[i];
    }
    ll ans = 0;
    for(int i: a){
        int lb = lower_bound(all(b), p-i)-b.begin();
        ans += (ll)i*lb;
        ans += b_sum[lb];
        ans += (ll)p * (m-lb);
    }
    
    cout << ans << endl;
    return 0;
}