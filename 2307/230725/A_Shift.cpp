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
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i,n) cin >> a.at(i);
    rep(i,k){
        a.erase(a.begin());
        a.push_back(0);
    }
    

    rep(i,a.size())cout << a.at(i) << " ";
    cout << endl;
    return 0;
}