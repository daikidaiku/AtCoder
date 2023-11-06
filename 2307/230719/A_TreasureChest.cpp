#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int N;
    cin >> N;
    string S;
    cin >> S;
    auto pos_l = S.find("|");
    auto pos_r = S.rfind("|");
    auto pos_a = S.find("*");
    if (pos_l < pos_a && pos_a < pos_r){
        cout << "in" << endl;
    }else{
        cout << "out" << endl;
    }

    
    return 0;
}