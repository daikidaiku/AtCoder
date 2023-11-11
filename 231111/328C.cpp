#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
// int countlr(int l, int r){

    
// }


int main()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;

    int l[q], r[q];
    rep(i,q)cin >> l[i] >> r[i];
    int res[n-1];
    rep(i,n-1){
        if(s[i] == s[i+1])res[i] = 1;
        else res[i] = 0;
    }
    vector<int> sum(n,0);
    rep(i,n) sum[i+1] = sum[i] +res[i];

    int ans[q];
    rep(i,q){
        cout << sum[r[i]-1]-sum[l[i]-1] << endl;
    }


    
    return 0;
}