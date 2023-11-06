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
    int h, w;
    cin >> h >> w;
    int a[h][w];
    rep(i,h)rep(j,w)cin >> a[i][j];
    bool res = true;
    rep(i_1,h)rep(j_1,w){
        rep2(i_2,i_1+1, h)rep2(j_2, j_1+1, w){
            if (a[i_1][j_1] + a[i_2][j_2] > a[i_2][j_1] + a[i_1][j_2]){
                res = false; 
            }
        }
    }
    if (res) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}