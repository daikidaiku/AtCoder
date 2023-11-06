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
    string s[n];
    int bl = 35*18;
    int wh = 46*14;
    rep(i,n) cin >> s[i];
    rep(i,n-8){
        rep(j,m-8){
            int bll = 0, blr = 0;
            rep(k,3){
                rep(l,3){
                    bll += s[i+k][j+l];
                }
            }
            rep(k,3){
                rep(l,3){
                    blr += s[i+6+k][j+6+l];
                }
            }

            int wh1 = 0, wh2 = 0;
            rep(k,4) wh1 += s[i+3][j+k];
            rep(k,3) wh1 += s[i+k][j+3];
            rep(k,4) wh2 += s[i+5+k][j+5];
            rep(k,3) wh2 += s[i+6][j+5];

            if (bll+blr == bl && wh1+wh2 == wh){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }
    return 0;
}