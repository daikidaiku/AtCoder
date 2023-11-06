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
    int p[n];
    bool func[110][110] = {};

    rep(i,n){
        cin >> p[i];
        int c;
        cin >> c;
        rep(j,c){
            int f;
            cin >> f;
            f--;
            func[i][f] = true;
        }
    }
    bool ans = false;
    rep(i,n){
        rep(j,n){
            bool cond1 = false;
            bool cond2 = true;
            bool cond3 = false;
            if(p[i] >= p[j]) cond1 = true;
            rep(k, m){
                if(func[i][k] && !func[j][k]) cond2 = false;
            }
            if(p[i] > p[j]) cond3 = true;
            rep(k, m){
                if(func[j][k] && !func[i][k]) cond3 = true;
            }
            if(cond1 && cond2 && cond3) ans = true; 
        }
    }
    if(ans) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}