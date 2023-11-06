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
    int a[n], b[n], c[n], d[n];
    rep(i,n) cin >> a[i] >> b[i] >> c[i] >> d[i];
    int max_x, max_y;
    max_x = max(*max_element(a, a+n), *max_element(b, b+n));
    max_y = max(*max_element(c, c+n), *max_element(d, d+n));

    int g[max_x + 1][max_y + 1];
    for(int i = 1; i <= max_x; i++){
        for(int j = 1; j <= max_y; j++){
            g[i][j] = 0;
        }
    }

    rep(x,n){
        for(int i = 1; i <= max_x; i++){
            for(int j = 1; j <= max_y; j++){
                if(a[x]+1 <= i && i <= b[x] && c[x]+1 <=j && j <= d[x]){
                    g[i][j] = 1;
                }
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= max_x; i++){
        for(int j = 1; j <= max_y; j++){
            if(g[i][j] == 1) ans++;
        }
    }
    cout << ans << endl;


    return 0;
}