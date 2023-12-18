#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int binary(int bina){
    int ans = 0;
    for (int i = 0; bina>0 ; i++)
    {
        ans = ans+(bina%2)*pow(10,i);
        bina = bina/2;
    }
    return ans;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int a[m], b[m];
    rep(i,m) cin >> a[i];
    rep(i,m) cin >> b[i];

    bool res = true
    for(int x = 0; x < 1 << m; x++){
        bitset<1000000> bs(x);
        rep(i,m){
            if (x[a[i]] == x[b[i]]) res = false;
        }
    }

    
    return 0;
}