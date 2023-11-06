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
    vector<int> a(5);
    rep(i, 5)cin >> a.at(i);
    sort(all(a));
    vector<int> b(5);
    rep(i,a.size()) b.at(i) = a.at(i);
    b.erase(unique(all(b)),b.end());
    size_t c = count(all(a), a.at(0));
    if(b.size()!=2 || (c == 1 || c == 4)) cout << "No" << endl;
    else cout << "Yes" << endl;
    return 0;
}