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
    int a, b, c = 0;
    cin >> a >> b;
    if (a == 1 || a == 3 || a == 5 || a == 7 || b == 1 || b == 3 || b == 5 || b == 7){
        c += 1;
    }
    if (a == 2 || a == 3 || a == 6 || a == 7 || b == 2 || b == 3 || b == 6 || b == 7){
        c += 2;
    }
    if (a == 4 || a == 5 || a == 6 || a == 7 || b == 4 || b == 5 || b == 6 || b == 7){
        c += 4;
    }
    cout << c << endl;
    return 0;
}