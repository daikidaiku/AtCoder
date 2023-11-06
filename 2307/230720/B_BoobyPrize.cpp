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
    vector<int> A(N);
    rep(i,N) cin >> A.at(i);
    vector<int> B = A;
    sort(A.begin(), A.end());
    reverse(A.begin(), A.end());
    vector<int>::iterator iter = find(B.begin(), B.end(), A.at(1));
    size_t index = distance(B.begin(), iter);

    cout << index+1 << endl;
    return 0;
}