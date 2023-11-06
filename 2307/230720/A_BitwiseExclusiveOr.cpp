#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
    int A, B;
    cin >> A >> B;
    const int n = 8;
 
    string A_b = std::bitset<n>(A).to_string();
    string B_b = std::bitset<n>(B).to_string();
    int X = 0;
    rep(i,8){
        if (A_b[i] != B_b[i]){
            X += pow(2,n-i-1);
        }
    }
    cout << X << endl;
    
    return 0;
}