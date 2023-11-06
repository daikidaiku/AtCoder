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
    int N, K, A, S;
    // K枚のカードをN人にAの人から配り始める
    cin >> N >> K >> A;
    if(K>= N - A + 1){
        S=(K-(N - A + 1))%N;
        if (S==0){
            cout << N << endl;
        }else{
        cout << S << endl;
        }
    }else{
        cout << A+K-1 << endl;
    }

    
    return 0;
}