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
    vector<string> W(N);
    rep(i, N) cin >> W.at(i);
    rep(i, N){
        if (W.at(i) == "and"|| W.at(i) == "not" || W.at(i) == "that" || W.at(i) == "the" || W.at(i) == "you"){
            cout << "Yes" << endl;
            return 0;
        }
    }  
    cout << "No" << endl;
    return 0;
}