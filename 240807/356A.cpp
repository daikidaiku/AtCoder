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
    int n, l, r;
    cin >> n >> l >> r;

    int a[n];
    rep(i,n)a[i] = i + 1;

    rep(i,n){
        if(l - 1 <= i && i <= r-1){
            cout << r-(i - l + 1) << endl;
        }else{
            cout << i + 1 << endl;
        }
    }

    return 0;
}