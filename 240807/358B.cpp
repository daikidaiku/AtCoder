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
    int n, a;
    cin >> n >> a;
    int t[n];
    rep(i,n) cin >> t[i];
    int res = 0;
    int num = 0;
    bool aki = true;
    int out = 0;
    while(res < n){
        if (num == out) aki = true;
        if (aki){
            if(t[res] <= num){
                out = num + a;
                cout << out << endl;
                res++;
                aki = false;
            }
        }
        num++;
    }
    return 0;
}