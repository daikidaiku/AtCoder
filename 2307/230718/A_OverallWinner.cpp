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
    int t=0, a=0;
    rep(i,N){
        switch (S[i]){
            case 'T':
                t++;
                break;
            case 'A':
                a++;
                break;
        }
        if (t== (N+1)/2){
            cout << "T" << endl;
            return 0;
        }
        if (a== (N+1)/2){
            cout << "A" << endl;
            return 0;
        }
    }
    if (t>a){
        cout << "T" << endl;
    }else{
        cout << "A" << endl;
    }

    return 0;
}