#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int a, b;
    cin >> a >> b;
    if ((a+b) % 2 == 1)
    {
        b += 1;
    }
    
    cout << (a+b)/2 << endl;
    return 0;
}