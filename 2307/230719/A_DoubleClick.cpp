#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N, D;
    cin >> N >> D;
    vector<int> T(N);
    rep(i,N) cin >> T.at(i);
    rep2(i,1,N){
        int x_i = T.at(i), x_i1 = T.at(i-1);
        if (x_i - x_i1 <= D){
            cout << x_i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}