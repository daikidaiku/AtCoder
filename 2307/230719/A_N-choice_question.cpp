#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N, A, B;
    cin >> N >> A >> B;
    vector<int> C(N);
    rep(i, N) cin >> C.at(i); 
    rep(i,N){
        if (C.at(i) == A+B)
        cout << i+1 << endl;
    }
    return 0;
}