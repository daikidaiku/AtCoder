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
    int a[110];
    int x[110][110];
    rep(i,m) cin >> a[i];
    rep(i,n){
        rep(j,m){
            cin >> x[i][j];
        }
    }
    int res[110] = {};
    rep(i,n){
        rep(j,m){
            res[j] += x[i][j];
        }
    }
    bool jubun = true;
    rep(i,m){
        if(a[i] > res[i])jubun = false;
    }

    if(jubun) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}