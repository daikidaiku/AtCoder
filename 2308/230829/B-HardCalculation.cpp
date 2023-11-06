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
    string a, b;
    cin >> a >> b;
    int len_a = a.length();
    int len_b = b.length();
    bool res = true;
    rep(i, min(len_a, len_b)){
        if(a[len_a -1- i] + b[len_b-1 - i] - '0' > '9') res = false;
    }
    
    if (res) cout << "Easy" << endl;
    else cout << "Hard" << endl;
    return 0;
}