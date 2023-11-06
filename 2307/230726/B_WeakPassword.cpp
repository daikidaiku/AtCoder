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
    char x[4];
    rep(i,4) x[i] = 0;
    cin >> x;
    bool same = true;
    bool step = true;
    rep(i,3){
        if (x[i] != x[i+1]) same = false;
        if ((x[i] + 1) % 10 != x[i+1] % 10) step = false;
    }
    if (same || step) cout << "Weak" << endl;
    else cout << "Strong" << endl;
    return 0;
}