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
    string s;
    cin >> s;
    switch (s[2])
    {
    case 'n':
        cout << 5 << endl;
        break;
    
    case 'e':
        cout << 4 << endl;
        break;
    
    case 'd':
        cout << 3 << endl;
        break;
    
    case 'u':
        cout << 2 << endl;
        break;
    
    case 'i':
        cout << 1 << endl;
        break;
    }
    return 0;
}