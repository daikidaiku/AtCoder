#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n, ans = 0,res = 0;
    cin >> n;
    int p[n];
    rep(i,n) cin >> p[i];
    int max = p[0];

    rep(i,n) {
        if(p[i] > max) max = p[i];
    }
    rep(i,n){
        if (max == p[i]) res++;
    }


    if (max == p[0] && res == 1) cout << 0 << endl;
    else if (max == p[0]) cout << 1 << endl;
    else cout << max - p[0] + 1 << endl;    
    return 0;
}