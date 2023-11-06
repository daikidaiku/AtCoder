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
    string s[3];
    rep(i,3) cin >> s[i];
    int ans[] = {0, 0, 0, 0};
    string a[] = {"ABC", "ARC", "AGC", "AHC"};
    rep(i,3){
        if(s[i][1] == 'B'){
            ans[0] = 1;
        }else if(s[i][1] == 'R'){
            ans[1] = 1;
        }else if(s[i][1] == 'G'){
            ans[2] = 1;
        }else if(s[i][1] == 'H'){
            ans[3] = 1;
        }
    }
    rep(i,4){
        if(ans[i] == 0) cout << a[i] << endl;
    }
    return 0;
}