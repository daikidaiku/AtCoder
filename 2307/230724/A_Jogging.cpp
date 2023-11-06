#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

/*
高橋君と青木君はジョギングをすることにしました。
高橋君は「A 秒間秒速 B メートルで歩き、C 秒間休む」ことを繰り返します。
青木君は「D 秒間秒速 E メートルで歩き、F 秒間休む」ことを繰り返します。
二人が同時にジョギングを始めてから X 秒後、高橋君と青木君のうちどちらが
長い距離を進んでいますか？
*/
int main()
{
    int a, b, c, d, e, f, x, taka=0, aoki=0;
    cin >> a >> b >> c >> d >> e >> f >> x;
    rep(k,x){
        if(k % (a + c) < a){
            taka += b;
        }
        if(k % (d + f) < d){
            aoki += e;
        }
    }
    if(taka > aoki) cout << "Takahashi" << endl;
    else if ( taka < aoki)cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    
    return 0;
}