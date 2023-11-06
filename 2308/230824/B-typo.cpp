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
    string s, t;
    cin >> s >> t;
    int len = s.length();

    if(s == t) {
        cout << "Yes" << endl;
        exit(0);
    }
    rep(i,len-1){
        swap(s[i], s[i+1]);
        if(s == t){
            cout << "Yes" << endl;
            exit(0);
        }
        swap(s[i], s[i+1]);
    }
    cout << "No" << endl;
    return 0;
}