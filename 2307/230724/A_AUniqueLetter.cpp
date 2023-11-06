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
    string s;
    cin >> s;
    int res = 0;
    string ans;
    if (s[0] == s[1] && s[1] == s[2]) ans = "-1";
    else if (s[0] == s[1]) ans = s[2];
    else if (s[1] == s[2]) ans = s[0];
    else if (s[0] == s[2]) ans = s[1];
    else ans = s[0];
    cout << ans << endl;

    return 0;
}