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
    int n,m;
    cin >> n >> m;
    int a[m], b[m];
    rep(i,m) cin >> a[i] >> b[i];
    int x[n];
    rep(i,n) x[i] = 1;

    rep(i,m){
        x[b[i]-1] -= 1;
        // rep(j,m){
        //     if(b[i] == a[j]){
        //         x[b]
        //     }
        // }
    }
    
    int sum = 0;
    
    rep(i,n){
        
        if(x[i] == 1) sum += 1;   
    }

    if(sum > 1) {cout << -1 << endl;}
    else{
        rep(i,n){
            if(x[i] == 1) cout << i+1 << endl;
        }
    }    
    return 0;
}