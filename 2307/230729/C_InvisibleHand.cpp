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
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    rep(i,n) cin >> a[i];
    rep(i,m) cin >> b[i];
    
    int x = *min_element(b,b+m-1);
    bool min = true;

    while (min){
        int sell = 0;
        int buy = 0;
        rep(i,n){
            if(a[i] <= x){
                sell++;
            }
        }
        rep(i,m){
            if(b[i] >= x){
                buy++;
            }
        }

        if(sell >= buy){

            cout << x << endl;
            min = false;
        }else{
            x++;
        }
    }

    return 0;
}