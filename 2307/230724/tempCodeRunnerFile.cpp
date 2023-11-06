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
    int l_1, r_1, l_2, r_2;
    cin >> l_1 >> r_1 >> l_2 >> r_2;
    if(l_1 > l_2){
        swap(l_1, l_2);
        swap(r_1, r_2);
    }

    if (r_1 <= l_2){
        cout << 0 << endl;
    }else if (r_1 <= r_2){
        cout << r_1-l_2 << endl;
    }else{
        cout << r_2 - l_2 << endl;
    }
    return 0;
}