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
    string S_1, S_2;
    cin >> S_1 >> S_2;
    if(S_1[0] == S_2[1] && S_1[1] == S_2[0] && S_1[0] != S_1[1]){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }
    return 0;
}