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
    int a[n];
    rep(i,n) cin >> a[i];

    rep(i,n-1) {
        if(a[i] != a[i+1]){
            cout << "No" << endl;
            return 0;
        } 
    }
    cout << "Yes" << endl;
    return 0;
}