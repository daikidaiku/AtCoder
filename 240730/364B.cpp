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
    int h, w, s_i, s_j;
        cin >> h >> w;
    string c[h];

    cin >> s_i >> s_j;
    s_i--;
    s_j--;

    rep(i,h){
        cin >> c[i];
        // rep(j,w){
        //     c[i][j] = s[j];
        // }
    }
    string x;
    cin >> x;

    rep(i,size(x)){
        switch (x[i]){
            case 'L':
                if (s_j - 1 >= 0 && c[s_i][s_j - 1] == '.') {
                    s_j--;
                }
                break;
            case 'R':
                if (s_j + 1 <= w - 1 && c[s_i][s_j + 1] == '.'){
                    s_j++;
                }
                break;
            case 'U':
                if (s_i - 1 >= 0 && c[s_i - 1][s_j] == '.'){
                    s_i--;
                }
                break;
            case 'D':
                if (s_i + 1 <= h - 1 && c[s_i + 1][s_j] == '.') {
                    s_i++;
                }
                break;
        }
    }

    cout << s_i + 1 << " " << s_j + 1 << endl;
    return 0;
}