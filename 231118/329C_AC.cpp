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
    int n;
    string s,res;
    cin >> n >> s;
    vector<int> m(26);
    
    int l = 0;
    while(l < n){
        int r = l + 1;
        while (r < n and s[l] == s[r]) r++;
        int c = s[l] - 'a';
        m[c] = max(m[c], r-l);
        l = r;
    }
    int ans = 0;
    rep(i,26){
        ans += m[i];
    }
    cout << ans << endl;
    return 0;
}