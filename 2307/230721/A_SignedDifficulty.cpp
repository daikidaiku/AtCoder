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
    double X;
    cin >> X;
    int Z = X, Y;
    Y = (X - Z)*10;
    if(Y <= 2){
        cout << to_string(Z) + "-" << endl;
    }else if(Y <= 6){
        cout << to_string(Z) << endl;
    }else{
        cout << to_string(Z) + "+" << endl;
    }
    return 0;
}