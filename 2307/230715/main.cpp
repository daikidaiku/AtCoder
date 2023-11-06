#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    
    
    int N, P, Q;
    cin >> N >> P >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A.at(i);
    sort(A.begin(), A.end());
    if (P > A[0] + Q){
        cout << A[0] + Q << endl;
    }else{
        cout << P << endl;
    }
    return 0;
}