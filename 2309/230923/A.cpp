#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

bool res(string n){
    int len = n.size();
    rep(i,len-1){
        if(n[i] <= n[i+1]) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    string ns = to_string(n);
    if(res(ns)) cout << "Yes" << endl;
    else cout << "No" << endl;

    

    return 0;
}