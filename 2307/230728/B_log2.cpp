#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    long long n;
    cin >> n;
    int k = 0;
    bool max = true;
    while (max)
    {
        if ((long long)pow(2,k) <= n) {k++;}
        else {max = false; k--;}

    }
    cout << k << endl;
    return 0;
}