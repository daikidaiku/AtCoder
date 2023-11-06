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
    int n;
    cin >> n;
    string s;
    if (n == 0){s = "00";}
    while (n!= 0){
        if (n % 16 == 0){s = "0" + s;}
        else if (n % 16 == 1){s = "1" + s;}
        else if (n % 16 == 2){s = "2" + s;}
        else if (n % 16 == 3){s = "3" + s;}
        else if (n % 16 == 4){s = "4" + s;}
        else if (n % 16 == 5){s = "5" + s;}
        else if (n % 16 == 6){s = "6" + s;}
        else if (n % 16 == 7){s = "7" + s;}
        else if (n % 16 == 8){s = "8" + s;}
        else if (n % 16 == 9){s = "9" + s;}
        else if (n % 16 == 10){s = "A" + s;}
        else if (n % 16 == 11){s = "B" + s;}
        else if (n % 16 == 12){s = "C" + s;}
        else if (n % 16 == 13){s = "D" + s;}
        else if (n % 16 == 14){s = "E" + s;}
        else if (n % 16 == 15){s = "F" + s;}
        n/=16;
    }
    if (s.size() == 1){s = "0" + s;}
    cout << s << endl;
    return 0;
}