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
    int r, g, b;
    cin >> r >> g >> b;
    string c;
    cin >> c;

    if (c == "Red"){
        if (g < b)cout << g << endl;
        else cout << b << endl;
    }else if (c == "Green"){
        if (r < b)cout << r << endl;
        else cout << b << endl;
    }else{
        if (r < g)cout << r << endl;
        else cout << g << endl;
    }
    return 0;
}