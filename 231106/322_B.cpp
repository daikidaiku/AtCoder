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
    int n, m;
    cin >> n >> m;
    
    string s, t;
    cin >> s >> t;

    bool prefix = true;
    bool suffix = true;

    rep(i,n){
        if(t[i] != s[i]) prefix = false;
        if(t[m-n+i] != s[i]) suffix = false;
    }

    if(prefix && suffix) cout << 0 << endl;
    else if(prefix) cout << 1 << endl;
    else if(suffix) cout << 2 << endl;
    else cout << 3 << endl;
    
    return 0;
}