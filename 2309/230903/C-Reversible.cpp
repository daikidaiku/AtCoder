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

    int ans = 0; set<string> T; string s;

    rep2(i, 1, n+1){
        cin >> s;
        if(T.count(s) == 0) ans++;
        T.insert(s);
        reverse(all(s));
        T.insert(s);
    }

    cout << ans << endl;
    
    return 0;
}