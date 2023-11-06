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
    int s[n];
    rep(i,n) cin >> s[i];
    int ans[n];
    rep(i,n)ans[i]=0;
    int res = 0;
    rep(i,n){
        rep2(j,1,s[i]){
            rep2(k,1,s[i]){
                if (4*j*k + 3 * j + 3 * k == s[i]){
                    ans[i] = 1;
                }
            }
        }
    }
    rep(i,n)if (ans[i]==1)res++;
    cout << n-res << endl;
     
    return 0;
}