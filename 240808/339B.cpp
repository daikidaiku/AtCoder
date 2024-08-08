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
    int h, w, n;
    cin >> h >> w >> n;
    char t[h][w];
    rep(i,h){
        rep(j,w){
            t[i][j] = '.';
        }
    }
    int taka[2] = {0,0};
    int ori = 2;
    rep(i,n){
        if(t[taka[0]][taka[1]] == '.'){
            t[taka[0]][taka[1]] = '#';
            ori = (ori + 3) % 4;
        }else{
            t[taka[0]][taka[1]] = '.';
            ori = (ori + 1) % 4;
        }
        taka[0] += dx[ori] + h;
        taka[1] += dy[ori] + w;
        taka[0] %= h;
        taka[1] %= w;
    }
    rep(i,h){
        rep(j,w){
            cout << t[i][j];
            if(j == w - 1) cout << endl;
        }
    }
    return 0;
}