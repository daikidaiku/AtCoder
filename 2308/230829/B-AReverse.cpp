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
    int l, r;
    cin >> l >> r;
    string s;
    cin >> s;
    string ans_l = s.substr(0,l-1);
    string ans_c = s.substr(l-1, r-l+1);
    string ans_r = s.substr(r);
    int len = ans_c.length();
    rep(i, len/2){
        swap(ans_c[i], ans_c[len-1-i]);
    }
    string ans = ans_l + ans_c + ans_r; 
    cout << ans << endl;

    return 0;
}