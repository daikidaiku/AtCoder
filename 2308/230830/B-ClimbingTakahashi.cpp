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
    int h[n+1];
    rep(i,n) cin >> h[i];
    h[n] = 0;
    int res = h[1] - h[0];
    int j = 0;
    while(res > 0){
        j++;
        res = h[j+1]-h[j];
    }
    cout << h[j] << endl;
    return 0;
}