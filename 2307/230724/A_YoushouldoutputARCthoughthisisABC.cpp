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
    int r, c;
    cin >> r >> c; 
    vector<vector<int> > a(2, vector<int>(2));
    rep(i,2) rep(j,2) cin >> a.at(i).at(j);
    cout << a.at(r-1).at(c-1) << endl;
    return 0;
}