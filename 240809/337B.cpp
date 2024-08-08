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
    string s;
    cin >> s;
    char res = 'A';
    int n = s.size();
    int i = 0;
    while(i < n){
        if(s[i] != res){
            if(s[i] == res + 1 || s[i] == res + 2){
                i++;
                res++;
            }else{
                cout << "No" << endl;
                return 0;
            }
        }else{
            i++;
        }
    }
    cout << "Yes" << endl;
    return 0;
}