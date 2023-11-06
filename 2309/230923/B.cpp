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
    int n, x;
    cin >> n >> x;
    int a[n-1];
    rep(i,n-1) cin >> a[i];
    int Mx = a[0], mn = a[0],sum = 0;
    rep(i,n-1){
        Mx = max(Mx,a[i]);
        mn = min(mn,a[i]);
        sum += a[i];
    }

    rep(i,101){
        int Mx1 = max(Mx,i);
        int mn1 = min(mn,i);
        int s = sum + i;
        s -= mn1+Mx1;
        if(x <= s) {
            cout << i << endl;
            return 0;
        }

    }

    cout << -1 << endl;

    return 0;
}