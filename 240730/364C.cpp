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
    int n; ll x, y;
    cin >> n >> x >> y;
    vector<ll> a(n), b(n);
    rep(i,n) cin >> a[i];
    rep(i,n) cin >> b[i];
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(), b.rend());
    vector<ll> res_a(n-1), res_b(n-1);
    rep(i,n){
        if (i == 0) {
            res_a[i] = a[i];
            res_b[i] = b[i];
        }else{
            res_a[i] = res_a[i-1] + a[i];
            res_b[i] = res_b[i-1] + b[i];
        }
        if (res_a[i] > x || res_b[i] > y){
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}