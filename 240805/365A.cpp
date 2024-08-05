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
    int y;
    cin >> y;
    int ans;
    if (y % 4 != 0) ans = 365;
    else if (y % 100 != 0) ans = 366;
    else if (y % 400 != 0) ans = 365;
    else ans = 366;
    cout << ans << endl;
    return 0;
}