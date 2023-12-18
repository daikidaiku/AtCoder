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
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i,n) cin >> a[i];
    sort(all(a));;
    vector<ll> b(n-1);
    rep(i,n-1){
            b[i] = a[i+1]-a[i];
            // cout << b[i] << endl;
    }

    ll res = 0;
    int right = 0;
    ll sum = 0;
    ll ans = 0;

    rep(left,n-1){
        while(right < n-1 && sum + b[right] < m){
            sum += b[right];
            right++;
        }
        res = right - left+1;
        ans = max(ans,res);
        if (right == left) ++right;
        else sum -= b[left];
    }

    cout << ans << endl;
    
    return 0;
}