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
    int r, c;
    cin >> r >> c;
    r-=1;
    c-=1;
    int res = 0;
    rep(i,h) rep(j,w){
        if(i == r && j == c) continue;
        else if(abs(r-i)+abs(c-j) == 1) res++;
    }
    cout << res << endl;
    return 0;
}