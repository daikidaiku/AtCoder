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
    int rice, miso;
    rep(i,3){
        if (s[i] == 'R') rice = i;
        if (s[i] == 'M') miso = i;
    }
    if(rice < miso) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}