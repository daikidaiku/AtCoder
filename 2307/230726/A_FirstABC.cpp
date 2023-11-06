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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0, c = 0;
    rep(i,n){
        if (s[i] == 'A') a = 1;
        else if (s[i] == 'B') b = 1;
        else if (s[i] == 'C') c = 1;
        if (a * b * c == 1){
            cout << i+1 << endl;
            break;
        }
    }
    return 0;
}