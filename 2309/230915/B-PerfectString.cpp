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
    string s;
    cin >> s;
    int n = s.size();
    set<char> r;
    rep(i,n) r.insert(s[i]);
    bool uni = r.size() == n;
    bool big = false, small = false;
    rep(i,n){
        if('A' <= s[i] && s[i] <= 'Z') big = true;
        if('a' <= s[i] && s[i] <= 'z') small = true;
    }
    if(uni && big && small) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}