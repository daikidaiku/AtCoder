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
    int n, h, x;
    cin >> n >> h >> x;
    int p[n+1];
    p[0] = 0;
    rep2(i,1,n+1) cin >> p[i];
    int i = 0;
    while (h < x){
        h -= p[i];
        i++;
        h += p[i];
    }
    cout << i << endl;
    return 0;
}