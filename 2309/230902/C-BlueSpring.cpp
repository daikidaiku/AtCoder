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
    int n, d, k;
    long long p;
    cin >> n >> d >> p;
    vector<long long> f(n), s(n);
    rep(i,n) cin >> f.at(i);

    sort(all(f));
    s[0] = f[0];
    rep(i, n-1) s[i+1] = s[i] + f[i+1];

    k = (n+d-1)/d;
    long long ans = p*k;
    rep(i,k){
        ans = min(ans,s[n-1-(i*d)]+p*i);
    }
    
    // while(d * res < n + res){
    //     long long  r = p * res;
    //     rep(i, n - d * res) r += f.at(i);
    //     if(r < ans) ans = r;
    //     if()
    //     res++;
    // }
    cout << ans << endl;
    return 0;
}