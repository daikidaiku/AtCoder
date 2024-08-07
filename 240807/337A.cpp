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
    int a, b, a_sum = 0, b_sum = 0;
    rep(i,n){
        cin >> a >> b;
        a_sum += a;
        b_sum += b;
    }
    if (a_sum > b_sum) cout << "Takahashi" << endl;
    else if (a_sum < b_sum) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    return 0;
}