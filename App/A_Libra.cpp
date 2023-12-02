#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if (A+B > C+D){
        cout << "Left" << endl;
    }else if (A+B < C+D){
        cout << "Right" << endl;
    }else{
        cout << "Balanced" << endl;
    }
    return 0;
}