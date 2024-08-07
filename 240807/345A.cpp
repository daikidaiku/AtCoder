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
    int n = s.size();
    bool res = true;
    if(s[0] != '<' || s[n-1] != '>') res = false;
    rep(i,n-2){
        if(s[i+1] != '=')res = false;
    }

    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}