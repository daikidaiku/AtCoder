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
    int n, m;
    cin >> n >> m;
    int h[n];
    rep(i,n) cin >> h[i];
    int res = 0;
    rep(i,n){
        res += h[i];
        if(res > m){
            cout << i << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}