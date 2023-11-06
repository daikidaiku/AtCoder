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
    string s[n];
    rep(i,n) cin >> s[i];
    int ma = 0;
    string res;
    rep(i,n){
        string kouho = s[i];
        int cnt = 0;
        rep(j,n) if(s[j] == kouho) cnt++;
        if(cnt > ma){
            ma = cnt;
            res = kouho;
        }
    }
    cout << res << endl;
    return 0;
}