#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

bool is_palindrome(string s){
    int n = s.size();
    rep(i,n) if (s[i] != s[n-i-1]) return false;
    return true;
}

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int ans = 1;
    rep(i,n){
        for(int j = i; j <= n; j++){
            string t = "";
            for(int k = i; k<j; k++)t+=s[k];
            if(is_palindrome(t))ans = max(ans, j-i);
        }
    }
    cout << ans << endl;
    return 0;
}