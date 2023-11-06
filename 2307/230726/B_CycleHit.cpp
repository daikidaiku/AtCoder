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
    vector<string> s(4);
    rep(i,4) cin >> s.at(i);
    int a=0, b=0, c=0, d=0;

    rep(i,4){
        string x = s.at(i);
        if (x == "H") a++;
        else if(x == "2B") b++;
        else if (x == "3B") c++;
        else if (x == "HR") d++;
    }
    if(a == 1 && b == 1 && c == 1 && d == 1){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}