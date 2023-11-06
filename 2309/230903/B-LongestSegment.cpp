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
    int n;
    cin >> n;
    float x[110], y[110];

    rep2(i,1,n+1) cin >> x[i] >> y[i];

    float m = 0, len;
    for(int i = 1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            len = sqrt(pow(abs(x[i]-x[j]), 2)+pow(abs(y[i]-y[j]), 2));
            m = max(m,len);

        }
    }
    cout << fixed << setprecision(10) << m << endl;
    return 0;
}