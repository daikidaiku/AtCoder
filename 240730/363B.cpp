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
    int n, t, p;
    cin >> n >> t >> p;
    int l[n];
    rep(i,n) cin >> l[i];
    bool res = true;
    
    int count = 0;
    while(res){
        int longhair = 0;
        rep(i,n){
            if (l[i] >= t) longhair++;
        }
        if (longhair >= p){
            cout << count << endl;
            res = false;
        }
        count++;
        rep(i,n){
            l[i]++;
        }

    }
    return 0;
}