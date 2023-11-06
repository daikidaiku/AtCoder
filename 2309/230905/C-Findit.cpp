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
    cin >> n;
    int a[n+1], z[n+1];
    rep2(i,1,n+1) {
        cin >> a[i];
        z[i] = 0;
    }
    z[0] = 1;
    bool h = true;
    int res = 0;
    int c = a[1];
    while(true){
        z[c] += 1;
        if (z[c] == 2) break;
        c = a[c];
    }
    vector<int> b;
    while(h){
        res++;
        b.push_back(c);
        c = a[c];
        if (c == b[0])h = false;
    }

    cout << res << endl;
    rep(i,res) {
        if (i != res - 1) cout << b[i] << " ";
        else cout << b[i] << endl;
    }
    return 0;
}