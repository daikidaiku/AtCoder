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
    int n;
    cin >> n;
    bool res = true;
    while(res){
        int tri = n / 100;
        int sec = (n-tri*100) / 10;
        int one = n % 10;
        if(tri * sec == one) res = false;
        n++;
    }
    
    cout << n-1 << endl;


    return 0;
}