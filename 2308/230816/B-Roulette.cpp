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
    int n, x, c[101];
    vector<int> a[101];

    cin >> n;
    rep2(i, 1, n+1){
        cin >> c[i];
        a[i].resize(c[i]);
        rep(j,c[i]) cin >> a[i][j];
    }

    cin >> x;

    vector<int> vec;
    rep2(i, 1, n+1){
        rep(j,c[i]){
            if(a[i][j] == x){
                vec.push_back(i);
            }
        }
    }
    int cmin = 37;
    for(auto i : vec) cmin = min(cmin, c[i]);

    vector<int> ans;
    for(auto i : vec){
        if(c[i] == cmin) {
            ans.push_back(i);
        }
    }
    cout << ans.size() << endl;
    for(auto b : ans) cout << b << " ";
    cout << endl;
    return 0;
}