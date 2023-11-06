#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n, h, w;
    cin >> n >> h >> w;
    int sy, sx;
    cin >> sy >> sx;
    string s;
    cin >> s;
    int c[110][110], d[110][110];
    for(int i = 1;i <= h;i++){
        for(int j = 1; j <= w; j++){
            cin >> c[i][j];
        }
    }

    rep (i,s.size()){
        if (s[i] == 'F'){
            sy -= 1;
        }
        else if (s[i] == 'B'){
            sy += 1;
        }
        else if (s[i] == 'L'){
            sx -= 1;
        }
        else if (s[i] == 'R'){
            sx += 1;
        }
        cout << c[sy][sx] << endl;
    }

    return 0;
}