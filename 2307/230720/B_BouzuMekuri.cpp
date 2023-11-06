#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    rep(i,N){
        if (S[i] == '1'){
            if (i%2 == 0){
                cout << "Takahashi" << endl;
            }else{
                cout << "Aoki" << endl;
            }
            break;
        }
    }

    return 0;
}