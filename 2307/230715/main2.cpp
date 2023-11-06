#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N, M;
    cin >> N >> M;
    int P[N];
    int C[N];
    int F[N][M];
    int A;

    rep (i,N){
        rep(j,M)
        F[i][j] = 0;
    }
    for (int i = 0; i < N; i++) {

        cin >> P[i] >> C[i];
        for (int j = 0; j < C[i]; j++){
            cin >> F[i][j];
        }
    }
    
    rep(i, N){
        for (int j = i+1; j < N-i-1; j++) {   
            int res = 0;
            if (P[i] >= P[j]){
                rep(k,C[i]){
                    if (F[j][k]-F[i][k]==0){
                        res++;
                    }
                }
                if (res == C[i]){
                    cout << "Yes" << endl;
                    return 0;
                }
            }
            
        }
    }
    cout << "No" << endl;
    // rep(i, N){
    // cout << F[i][4] << endl;
    // }

    return 0;
}