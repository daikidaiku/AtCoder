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
    string t;
    cin >> n >> t;
    
    int x[2] = {0,0};
    int d = 0;
    rep(i,n){
        if(t[i] == 'S'){
            if(d == 0) x[0]++;
            if(d == 1) x[1]--;
            if(d == 2) x[0]--;
            if(d == 3) x[1]++;
        }
        else{
            d = (d + 1) % 4;
        }
    }
    cout << x[0] <<  " " << x[1] << endl;
    return 0;
}