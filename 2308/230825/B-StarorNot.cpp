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
    int n;
    cin >> n;
    int a[n-1], b[n-1];
    rep(i,n-1) cin >> a[i] >> b[i];
    int x[n];
    rep(i,n) x[i] = 0;
    
    rep(i,n-1) {
        x[a[i]-1] += 1;
        x[b[i]-1] += 1;
    }
    rep(i,n){
        if (x[i] == n-1){
            cout << "Yes" << endl;
            exit(0);
        }
    }
    cout << "No" << endl;
    
    
    return 0;
}