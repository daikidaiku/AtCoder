#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int A, B, C;
    cin >> A >> B >> C;
    if (A+B+C==17){
        if (A == 5){
            if (B == 5 || B == 7){
                cout << "YES" << endl;
                return 0;
            }
        }else if (A == 7){
            if (B == 5){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}