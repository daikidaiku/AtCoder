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

    if (n < 1000) cout << n << endl;
    else if (1000 <= n && n < 10000) cout << n - n % 10 << endl;
    else if (10000 <= n && n < 100000) cout << n - n % 100 << endl;
    else if (100000 <= n && n < 1000000) cout << n - n % 1000 << endl;
    else if (1000000 <= n && n < 10000000) cout << n - n % 10000 << endl;
    else if (10000000 <= n && n < 100000000) cout << n - n % 100000 << endl;
    else if (100000000 <= n && n < 1000000000) cout << n - n % 1000000 << endl;
    return 0;
}