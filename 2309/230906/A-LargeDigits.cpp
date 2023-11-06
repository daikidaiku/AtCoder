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
    string a, b;
    cin >> a >> b;
    
    int s_a = a[0] - '0' + a[1] - '0' + a[2] - '0';
    int s_b = b[0] - '0' + b[1] - '0' + b[2] - '0';

    if (s_a >= s_b) cout << s_a << endl;
    else cout << s_b << endl;

    return 0;
}