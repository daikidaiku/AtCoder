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
    int n, k, x;
    cin >> n >> k >> x;
    int a[n], b[n+1];
    rep(i,n){
        cin >> a[i];
    }
    rep(i,n+1){
        if (i < k){
            b[i] = a[i];
        }else if(i ==  k){
            b[i] = x;
        }else{
            b[i] = a[i - 1];
        }
    }
    rep(i,n+1) {
        if(i < n) cout << b[i] << " ";
        else cout << b[i] << endl;
    }
    return 0;
}