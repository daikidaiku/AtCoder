#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int A, B;
    cin >> A >> B;
    if ((A-1) / 3 == (B-1) / 3 && B - A == 1) {
        cout << "Yes" << endl;
    }else
    {
        cout << "No" << endl;
    }
    
    return 0;
}