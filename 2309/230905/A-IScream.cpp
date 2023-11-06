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
    int a, b;
    cin >> a >> b;
    if (a + b >= 15 && b >= 8) cout << 1 << endl;
    else if (a + b >= 10 && b >= 3) cout << 2 << endl;
    else if (a + b >= 3) cout << 3 << endl;
    else cout << 4 << endl;
    
    return 0;
}