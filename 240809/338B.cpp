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
    string s;
    cin >> s;
    vector<pair<int,int>> res(26);
    rep(i,26)res[i] = {0,i};
    int n = s.size();
    rep(i,n){
        int al = s[i] - 'a'; 
        res[al].first++;
    }
    rep(i,26){
        res[i].second *= -1;
    }
    sort(res.rbegin(),res.rend());
    rep(i,26){
        res[i].second *= -1;
    }
    char ans = res[0].second + 'a';
    cout << ans << endl;
    return 0;
}