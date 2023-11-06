#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int r, c;
    cin >> r >> c;
    
    string w = "white", b = "black";


    if(r == 8 && c == 8) cout << w << endl;
    else if (7 <= r && r <= 9 && 7 <= c && c <=9) cout << b << endl;
    else if (6 <= r && r <= 10 && 6 <= c && c <=10) cout << w << endl;
    else if (5 <= r && r <= 11 && 5 <= c && c <=11) cout << b << endl;
    else if (4 <= r && r <= 12 && 4 <= c && c <=12) cout << w << endl;
    else if (3 <= r && r <= 13 && 3 <= c && c <=13) cout << b << endl;
    else if (2 <= r && r <= 14 && 2 <= c && c <=14) cout << w << endl;
    else cout << b << endl;


    return 0;
}