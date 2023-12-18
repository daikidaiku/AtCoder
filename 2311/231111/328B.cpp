#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

bool zorome(int n){
    return n%10 == n/10;
}
int main()
{
    int n;
    cin >> n;
    
    int d[n];
    rep(i,n)cin >> d[i];

    int res = 0;
    rep(i,n){
        rep2(j,1,d[i]+1){
            if(i+1 < 10 && j < 10){
                if (i+1 == j) {
                    res++;
                    // cout << i << " "<< j << endl;
                }

            }else if (i+1 >= 10 && j < 10){
                if(zorome(i+1) && (i+1)%10== j){
                    res++;
                    // cout << i << " "<< j << endl;
                }
            }else if(i+1 <= 10 && j > 10){
                if(zorome(j) && (j)%10== i+1){
                    res++;
                    // cout << i << " "<< j << endl;
                }
            }else{
                if(zorome(i+1) && zorome(j) && (i+1)%10 == j%10) {
                    res++;
                    // cout << i << " "<< j << endl;
                }
            }
        }
    }

    cout << res << endl;
    
    return 0;
}