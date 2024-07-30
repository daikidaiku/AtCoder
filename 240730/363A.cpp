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
    int r;
    cin >> r;
    
    if (r <= 99){
        cout << 100 - r << endl;
    }else if (r <= 199){
        cout << 200 - r << endl;
    }else if (r <= 299){
        cout << 300 - r << endl;
    }
    return 0;
}