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
    int N, D;
    cin >> N >> D;
    vector<string> S(N);
    for(auto& s : S) cin >> s;
    
    int ans = 0, cur = 0;
    rep(j,D){
        int can = 1;
        rep(i,N){
            can &= S[i][j] == 'o';
        }
        if(can){
            cur ++;
        }else{
            cur = 0;
        }
        ans = max(ans,cur);
    }
    cout << ans << endl;


    return 0;
}