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
    int k;
    string a, b;
    cin >> k;
    cin >> a >> b;

    int a_len = a.length();
    int b_len = b.length();

    long long a_ten = 0, b_ten = 0;

    rep(i,a_len){
        a_ten += (int)(a[i]-'0') * pow(k,a_len-1-i);
    }
    rep(i,b_len){
        b_ten += (int)(b[i]-'0') * pow(k,b_len-1-i);
    }

    long long ans = a_ten * b_ten;

    cout << ans << endl;


    return 0;
}