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
    int a[] = {0,3,4,8,9,14,23};
    char P, Q;
    cin >> P >> Q;
    int p ,q;
    p = P - 65;
    q = Q - 65;
    int ans;
    ans = abs(a[p]-a[q]);
    cout << ans << endl;
    return 0;
}