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
    ll sum = 0;
    vector<int> a(n);
    rep(i,n) {
        cin >> a[i];
        sum += a[i];
    }
    sort(all(a));
    vector<int> b(n,sum/n);
    rep(i,sum % n){
        b[n-1-i]++;
    }
    ll ans = 0;
    rep(i,n) ans += abs(a[i]-b[i]);
    cout << ans/2 << endl;
    return 0;
}