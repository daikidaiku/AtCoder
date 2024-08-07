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
    int h;
    cin >> h;
    ll res = 1;
    int day = 1;
    int count = 0;
    while(true){
        count++;
        if (h < res){
            cout << count << endl;
            break;
        }

        day *= 2;
        res += day;
    }
    return 0;
}