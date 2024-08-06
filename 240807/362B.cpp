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

int naiseki(int a[2],int b[2], int c[2]){
return (a[0] - c[0])*(b[0] - c[0]) + (a[1] - c[1])*(b[1] - c[1]);
}

int main()
{
    int a[2],b[2],c[2];
    cin >> a[0] >> a[1] >> b[0] >> b[1] >> c[0] >> c[1];
    if(naiseki(a,b,c) == 0 || naiseki(b,c,a) == 0 || naiseki(c,a,b) == 0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}