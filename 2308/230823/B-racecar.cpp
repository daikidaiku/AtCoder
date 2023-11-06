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
    int n, res, len;
    cin >> n;
    string s[n];
    rep(i,n) cin >> s[i];

    bool r;
    string con;

    for(string i : s){
        for(string j : s){
            con = i + j;
            len = con.size();
            res = 0;
            rep(k,len/2){
                if(con[k] == con[len-k-1]){
                    res++;
                }
            }
            if(i != j && res == len/2){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}