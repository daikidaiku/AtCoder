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
    string S, T;
    cin >> S >> T;
    int res = 0;
    rep(i, N) {
        char ch1 = S[i];
        char ch2 = T[i];
        if (ch1 == ch2){
            res++;
        }else if ((ch1 == '1' && ch2 == 'l') || (ch1 == 'l' && ch2 == '1')){
            res++;
        }else if ((ch1 == '0' && ch2 == 'o') || (ch1 == 'o' && ch2 == '0')){
            res++;
        }
        
    }
    if (res == N){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }

    return 0;
}