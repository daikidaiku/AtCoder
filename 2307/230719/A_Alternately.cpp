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
    int res = 0;
    rep(i,N){
        if(S[0]=='M'){
            if((i % 2 == 1 && S[i] == 'F') || (i % 2 == 0 && S[i] == 'M')){
                res++;
            }
        }else if(S[0]=='F'){
            if((i % 2 == 1 && S[i] == 'M') || (i % 2 == 0 && S[i] == 'F')){
                res++;
            }
        }
    }
    if(res == N){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}