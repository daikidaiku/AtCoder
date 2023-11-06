#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

int main(){
    int N;
    int t[110000], x[110000], y[110000]; 
    cin >> N;
    t[0] = x[0] = y[0] = 0;
    rep(i, N) cin >> t[i+1] >> x[i+1] >> y[i+1];
    bool can = true;
    rep(i, N){
        int dt = t[i+1]-t[i];
        int dist = abs(x[i+1] - x[i]) + abs(y[i+1] - y[i]);
        if (dt < dist) can = false;
        if (dist % 2 != dt % 2) can = false;
    }
    if (can) cout << "Yes" << endl;
    else cout << "No" << endl;    
    
    return 0;
}