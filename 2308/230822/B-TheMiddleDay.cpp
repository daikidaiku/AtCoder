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
    int m;
    cin >> m;
    int d[m];
    rep(i,m) cin >> d[i];

    int sum = 0;
    rep(i,m) sum += d[i];

    sum = (sum+1)/2;
    int res = 1;
    for(auto i : d){
        if(sum <= i){
            break;
        }
        sum -= i;
        res++;
    }
    
    cout << res << " " << sum << endl;

    return 0;
}