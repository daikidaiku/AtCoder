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
    vector<ll> ans;
    for(int i = 2; i<(1<<10); i++){
        ll x = 0;
        for(int j=9;j>=0;j--){
            if(i&(1<<j)){
                x*=10;
                x+=j;
            }
        }
        ans.push_back(x);
    }
    sort(all(ans));
    int k;
    cin >> k;
    cout << ans[k-1] << endl;

    return 0;
}