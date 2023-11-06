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
    int X;
    cin >> X;
    int res;
    if(X < 40){
        res = 40 - X;
        cout << res << endl;
    }else if(X < 70){
        res = 70 - X; 
        cout << res << endl;
    }else if(X < 90){
        res = 90 - X;
        cout << res << endl;
    }else{
        cout << "expert" << endl;
    }
    
    return 0;
}