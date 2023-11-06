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
    rep(i,N)cin >> S.at(i);
    sort(S.begin(), S.end());
    S.erase(std::unique(S.begin(), S.end()), S.end());
    rep(i, N){
        string s = S[i];
        reverse(s.begin(), s.end());
        S[i]= s;
        sort(S.begin(), S.end());
        S.erase(std::unique(S.begin(), S.end()), S.end());
    }
    int length = S.size();
    cout << length << endl;
    return 0;
}