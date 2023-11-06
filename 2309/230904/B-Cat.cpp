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
    int n; string s;
    cin >> n >> s;

    vector<int> t;
    
    rep(i,n-1) {
        if(s[i] == 'n' && s[i+1] == 'a'){
            t.push_back(i);
        }
    }
    rep(i,t.size()) s.insert(t[i]+i+1,"y");
    cout << s << endl;
    return 0;
}