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
    int q;
    cin >> q;
    int que_1, que_2, n;
    VI a;
    rep(i,q){
        cin >> que_1 >> que_2;
        if(que_1 == 1){
            a.push_back(que_2);
        }else{
            n = a.size();
            cout << a[n - que_2] << endl;
        }
    }
    return 0;
}