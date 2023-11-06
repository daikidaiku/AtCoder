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
    vector<long long> a(n), b(m), ans;
    rep(i,n)cin >> a[i];
    rep(i,m)cin >> b[i];

    rep(i,n) ans.push_back(a[i]);
    rep(i,m) ans.push_back(b[i]+1);

    sort(all(ans));
    // for(auto i : ans){
    //     int res_a = 0, res_b = 0;
    //     rep(j,n){
    //         if(a[j] <= i) res_a++;
    //     }
    //     rep(j,m){
    //         if(i <= b[j]) res_b++;
    //     }
    //     if(res_a >= res_b){
    //         cout << i << endl;
    //         return 0;
    //     }

    // }
    cout << ans[m-1] << endl;
    return 0;
}