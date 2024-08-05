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
    ll m;
    cin >> n >> m;
    VI a(n);
    int Ma = 0;
    rep(i,n) {
        cin >> a[i];
    }
    ll s = accumulate(all(a),0ll);
    if (s <= m){
        cout << "infinite" << endl;
        return 0;
    }
    int ok = 0, ng = 1000000000;
    while(abs(ok - ng) > 1){
        int mid = (ok + ng) >> 1;
        ll tmp = 0;
        for (auto v : a) tmp += min(mid,v);
        if(tmp <= m) ok = mid;
        else ng = mid;
    }

    cout << ok << endl;
    return 0;
}