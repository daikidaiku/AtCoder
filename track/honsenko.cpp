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
    ll x;
    cin >> n >> x;
    string id[n], s[n];
    ll f[n];
    rep(i,n) cin >> id[i] >> s[i] >> f[i];

    rep(i,n){
        bool koushiki = s[i] == "Official";
        bool follower = f[i] >= x;
        if(koushiki && follower) cout << id[i] << endl;
    }
    return 0;
}