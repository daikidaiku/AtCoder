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
    string s;
    cin >> s;
    int res = 0;
    rep(i,n){
        if (s[i] == 'o' && res < k){
            s[i] = 'o';
            res++;
        }else{
            s[i] = 'x';
        }
    }
    cout << s << endl;
    return 0;
}