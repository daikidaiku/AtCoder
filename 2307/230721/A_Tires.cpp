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
    string S;
    cin >> S;
    int len;
    len = S.size();
    if(S[len-2] == 'e' && S[len-1] == 'r'){
        cout << "er" << endl;
    }else if(S[len-3] == 'i' && S[len-2] == 's' && S[len-1] == 't'){
        cout << "ist" << endl;
    }
    return 0;
}