#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N, A, X, Y;
    cin >> N >> A >> X >> Y;
    if (N <= A) {
        cout << X*N << endl;
    }else{
        cout << X*A + (N-A)*Y << endl;
    }
    return 0;
}