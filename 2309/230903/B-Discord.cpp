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
    int n, m;
    cin >> n >> m;
    int b[n][n];
    rep(i,n) rep(j,n) b[i][j] = 0;
    rep(k,m){
        int a[n];
        rep(i,n) cin >> a[i];
        for (int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                auto itr_i = find(a, a + n, i+1);
                auto itr_j = find(a, a + n, j+1);
                if(abs(itr_i - itr_j) ==1) b[i][j] = 1;
            }
        }
    }
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(b[i][j] == 0) res++;
        }
    }
    cout << res << endl;
    return 0;
}