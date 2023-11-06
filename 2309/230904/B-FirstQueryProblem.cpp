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
    int n, q;
    cin >> n;
    ll a[100010];
    rep2 (i,1,n+1) cin >> a[i];
    cin >> q;
    rep(i,q){
        int z;
        cin >> z;
        if(z == 1){
            int k, x;
            cin >> k >> x;
            a[k] = x; 
        }else{
            int k;
            cin >> k;
            cout << a[k] << endl;
        }
    }
    return 0;
}