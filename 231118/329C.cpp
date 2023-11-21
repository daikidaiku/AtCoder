// incorrect
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int n;
    string s,res;
    cin >> n >> s;

    int right = 0;
    // int ans = 0;
    // vector<string> st;
    set<string> st;

    rep(left, n){
        right = left;
        while (right < n && (s[right] == s[left] /*&& !st.count(s.substr(left,right-left+1))*/)){
            res = s.substr(left,right-left+1);
            // st.push_back(res);
            st.insert(res);
            right++;
        }
        left = right-1;
    }

    // sort(all(st));
    // st.erase(unique(st.begin(), st.end()), st.end());
    
    cout << st.size() << endl;

    // rep(i,st.size())cout << st[i] << endl;
    return 0;
}