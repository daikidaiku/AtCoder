#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();


int main()
{
    int S[10];
    for (int i = 0; i < 8; i++) cin >> S[i];

    if (S[0] < 100 || S[7] > 675){
        cout << "No" << endl;
        return 0;
    }

    rep(i,7){
        if (S[i+1]-S[i] < 0){
            cout << "No" << endl;
            return 0;
        }
    }

    rep(i,8){
        if (S[i] % 5 != 0){
            cout << "No" << endl;
            return 0; 
        }
    }
    cout << "Yes" << endl;
    return 0;
}