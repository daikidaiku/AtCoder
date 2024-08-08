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
    string s[n];
    vector<pair<int,int>> win(n);
    rep(i,n) {
        cin >> s[i];
        int res = 0;
        rep(j,n){
            if(s[i][j] == 'o') res++;
        }
        win[i] = {res, -i};
    }

    sort(win.rbegin(), win.rend());
    rep(i,n){
        cout << -win[i].second + 1;
        if (i == n - 1)cout << endl;
        else cout << " ";
    }
    return 0;
}