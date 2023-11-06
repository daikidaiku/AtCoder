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
    cin >> n;
    vector<int> a(n), b(n);
    rep(i,n) cin >> a.at(i) >> b.at(i);
    int m = *min_element(a.begin(), a.end());
    int M = *max_element(b.begin(), b.end());

    int z[100000];
    rep(i,n){
        for (int j = a[i]; j <= b[i];j++) z[j]++;
    }
    int ans = 0; int res = 0;
    for(int i = m; i <= M; i++){
        if(z[i] != 0) res++;
        else{
            ans = max(ans,res);
            res = 0;
        }
    }
    ans = max(ans,res);
    cout << ans << endl;
    return 0;
}