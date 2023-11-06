#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n], b[m];
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    
    int j = 0;
    int c[n];
    rep(i,n) c[i] = 0;

    rep(i,m){
        while (b[i] > a[j]){
            b[i] -= a[j];
            c[j] += a[j];
            j++;
            j = j % n;
        }

        c[j] += b[i];
        j++;
        j = j % n;
    }

    rep(i,n) cout << c[i] << endl;

    return 0;
}