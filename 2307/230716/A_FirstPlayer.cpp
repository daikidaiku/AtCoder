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
    vector<string> S(N);
    vector<int> A(N);
    rep(i,N)cin >> S[i] >> A[i];
    int minIndex = distance(A.begin(), min_element(A.begin(), A.end()));

    rep2(i, minIndex, N){
        cout << S[i] << endl;
    }
    if(minIndex != 0){
        rep(i,minIndex){
            cout << S[i] << endl;
        }
    }
    return 0;
}