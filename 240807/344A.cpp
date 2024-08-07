#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using VI = vector<int>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(obj) (obj).begin(), (obj).end()
constexpr int dx[] = {1, 0, -1, 0};
constexpr int dy[] = {0, 1, 0, -1};
// const long long INF = numeric_limits<long long>::max();
constexpr int INF = 1 << 30;

int main()
{
    string s;
    cin >> s;
    
    int n = s.size();
    int begin,end;
    rep(i,n){
        if(s[i] == '|'){
            begin = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--){
        if(s[i] == '|'){
            end = i;
            break;
        }
    }

    rep(i,begin){
        cout << s[i];
    }
    rep2(i,end+1,n){
        cout << s[i];
    }
    cout << endl;
    return 0;
}