#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
bool abc(char a,char b,char c){
    bool ans = a == 'A' && b == 'B'; 
    ans = ans && c == 'C';
    return ans;
}
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<char> st(n);
    rep(i,n)st[i] = s[i];
    bool fin = true;
    while(fin){
        bool res[n];
        rep(i,n-2){
            char p = st[i], q = st[i+1], r = st[i+2];
            if (abc(p,q,r)) res[n] = true;
            else res[n] = false;
        }
        for(int i = n-3;i >= 0 ;i--){
            int p = 0;
            if (res[i]){
                st.erase(st.begin()+i+2);
                st.erase(st.begin()+i+1);
                st.erase(st.begin()+i);
                p++;
                n -= 3;
            }
            if (p == 0) fin = false;
        }
    }

    rep(i,st.size()){
        cout << st[i] << endl;
        // if(i == st.size()-1) cout << st[i] << endl;
    }

    return 0;
}