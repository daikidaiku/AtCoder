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
    int res = 0;
    for(int i = 1; i <= N; i++){
        res = res + i;
    }
    cout << res << endl;
    return 0;
}