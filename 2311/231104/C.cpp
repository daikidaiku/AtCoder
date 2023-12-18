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
    int a[9][9];
    rep(i,9){
        rep(j,9){
            cin >> a[i][j];
        }
    }

    // int b[9]={},c[9]={},d[9]={};

    bool res1 = true;
    bool res2 = true;
    bool res3 = true;



    rep(i,9){
        int b[9]={};
        rep(j,9){
            b[a[i][j]-1]++;
        }
        // rep(k,9){
        //     cout << b[k] << endl;
        // }
        rep(k,9){
            if (b[k] != 1) res1 = false;
        }
    }

    rep(i,9){
        int c[9]={};
        rep(j,9){
            c[a[j][i]-1]++;
        }
        rep(k,9){
            if (c[k] != 1) res2 = false;
        }
    }

    for(int bx = 0; bx < 9; bx+=3) {
        for(int by= 0; by < 9; by+=3) { 
            int d[9]={};
            for(int x = 0+bx; x < 3+bx; x++) {
                for(int y= 0+by; y < 3+by; y++) {
                    d[a[x][y]-1]++;
                }
            }
            rep(k,9){
                if (d[k] != 1) res3 = false;
            }
        }
    }
    // cout << res1 << endl;
    // cout << res2 << endl;
    // cout << res3 << endl;

    if (res1 && res2 && res3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}