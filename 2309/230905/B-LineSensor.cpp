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
    int h, w;
    cin >> h >> w;
    
    string c[h];
    rep(i,h) cin >> c[i];

    int x[w];
    rep(i,w){
        x[i] = 0;
    }

    rep(i,h) rep(j,w){
        if(c[i][j] == '#') x[j] += 1; 
    }

    rep(i,w){
        if (i != w-1) cout << x[i] << " ";
        else cout << x[i] << endl;
    }
    return 0;
}