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
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    double ans;
    if (x <= a) ans = 1;
    else if (x <= b) ans = (double)c / (b - a);
    else ans = 0;
    cout << setprecision(12) << ans << endl;
    return 0;
}