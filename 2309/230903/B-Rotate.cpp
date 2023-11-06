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
    string s[n];
    string t[n];
    rep(i,n) cin >> s[i];

    int a[n][n];
    int b[n][n];

    rep(i,n){
        rep(j,n){
            a[i][j] = (int)(s[i][j]-'0');
        }
    }

    
    rep(i,n){
        rep(j,n){
            if(i == 0 && j != n-1) b[i][j+1] = a[i][j];
            else if(i != n-1 && j == n-1) b[i+1][j] = a[i][j];
            else if(i == n-1 && j != 0) b[i][j-1] = a[i][j];
            else if(i != 0 && j == 0) b[i-1][j] = a[i][j];
            else b[i][j] = a[i][j];
        }
    }

    rep(i,n){
        rep(j,n){
            if(j != n-1) cout << b[i][j];
            else cout << b[i][j] << endl;
        }
    }
    return 0;
}