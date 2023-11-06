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
    char s1, s2;
    cin >> S;
    int A, B;
    cin >> A >> B;
    s1 = S[A-1];
    s2 = S[B-1];
    S[A-1] = s2;
    S[B-1] = s1;
    cout << S << endl;
    return 0;
}