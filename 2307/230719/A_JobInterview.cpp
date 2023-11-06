#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N;
    cin >> N ;
    string S;
    cin >> S;
    int A = 0, B = 0, F = 0;
    rep(i,N){
        switch (S[i])
        {
        case 'o':
            A++;
            break;
        
        case '-':
            B++;
            break;
        
        case 'x':
            F++;
            break;
        }
    }
    if (A> 0 && F == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}