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
    int a[n];
    rep (i,n) cin >> a[i];
    long  sum = 0, ave;
    rep(i,n) sum += a[i];
    ave = round(sum / n);
    long ansM, ansm, ans;
    rep(i,n) {
        if (a[i] > ave) ansM += a[i] - ave;
        if (a[i] < ave) ansm += ave - a[i];
    }
    if(ansM == ansm){
        ans = ansm;
        cout << ans << endl;
    }
    else {
        ans = (ansM + ansm)/2;
        cout << ans << endl;
    }


    return 0;
}