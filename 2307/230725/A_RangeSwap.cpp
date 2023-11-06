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
    int n, p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    int a[n];
    rep(i,n) cin >> a[i];
    rep(i,q-p+1){
        swap(a[p-1+i], a[r-1+i]);
    }
    rep(i,n) cout << a[i] << " ";
    cout << endl;
    return 0;
}