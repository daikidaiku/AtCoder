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
    int h, w, n;
    cin >> h >> w >> n;
    int a[n], b[n];
    rep(i,n) cin >> a[i] >> b[i];

    vector<int> ys;
    rep(i, n) ys.push_back(a[i]);
    sort(all(ys));
    ys.erase(unique(all(ys)), ys.end());
    rep(i,n) a[i] = lower_bound(all(ys), a[i]) - ys.begin();

    vector<int> xs;
    rep(i, n) xs.push_back(b[i]);
    sort(all(xs));
    xs.erase(unique(all(xs)), xs.end());
    rep(i,n) b[i] = lower_bound(all(xs), b[i]) - xs.begin();

    rep(i,n) cout << a[i] + 1 << " " << b[i] + 1 << endl;


    return 0;
}