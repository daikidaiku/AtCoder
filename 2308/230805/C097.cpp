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
    int n, x, y;
    cin >> n >> x >> y;
    
    rep2(i,1,n+1){
        if (i % x == 0 && i % y == 0){
            cout << "AB" << endl;
        }else if (i % x == 0){
            cout << "A" << endl;
        }else if (i % y == 0){
            cout << "B" << endl;
        }else{
            cout << "N" << endl;
        }
    }

    return 0;
}