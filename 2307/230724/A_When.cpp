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
    int k, h, m;
    cin >> k;
    h = k/60;
    m = k - h*60;
    if (m < 10){
        cout << h + 21 << ":0" << m << endl;
    }else{
        cout << h + 21 << ":" << m << endl;
    }
    return 0;
}