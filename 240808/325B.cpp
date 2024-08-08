#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using VI = vector<int>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(obj) (obj).begin(), (obj).end()
constexpr int dx[] = {1, 0, -1, 0};
constexpr int dy[] = {0, 1, 0, -1};
// const long long INF = numeric_limits<long long>::max();
constexpr int INF = 1 << 30;

int main()
{
    int n;
    cin >> n;
    int w[n], x[n];
    rep(i,n) cin >> w[i] >> x[i];
    int time;
    int ans = 0;
    rep(i,24){
        int res = 0;
        rep(j,n){
            time = (x[j] + i) % 24;
            if(9 <= time && time <= 17){
                res += w[j];
            }
        }
        ans = max(ans,res);
    }
    cout << ans << endl;
    return 0;
}