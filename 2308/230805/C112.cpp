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
    int n;
    cin >> n;
    int s[n], f[n], t[n];
    rep(i,n) cin >> s[i] >> f[i] >> t[i];

    int day[n];
    rep(i,n){
        day[i] = s[i] + f[i] + (24 - t[i]);
    }
    int min = *min_element(day,day + n);
    int max = *max_element(day, day + n);
    cout << min << endl;
    cout << max << endl;
    return 0;
}