#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

unsigned int f(unsigned int n){
    if(n <= 0){
        return 1;
    }
    return n * f(n-1);
}
int main()
{
    int p;
    cin >> p;
    int n = 10;
    int res = 0;
    while(p > 0){
        int x = f(n);
        int c = p/x;
        res += c;
        p = p % x;
        n--;
        if(p <= 0) break;
    }

    cout << res << endl;
    return 0;
}