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
    string S; cin >> S;
    int ans = 3;
    if (S[0] == S[1] && S[1] == S[2]) ans = 1;
    else if(S[0] != S[1] && S[1] != S[2] && S[2] != S[0]) ans = 6;
    
    cout << ans << endl;
}