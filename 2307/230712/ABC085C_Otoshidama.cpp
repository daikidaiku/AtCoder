#include <bits/stdc++.h>
using namespace std;

int N, Y, A, B, C, X;

int main() {
  cin >> N >> Y;    
    for (int a = 0; a <= N; ++a) {
        for (int b = 0; b <= N - a; ++b) {
            int total = 10000*a + 5000*b + 1000*(N - a - b);
            if (total == Y)  {
                cout << a << " " << b << " " << N - a - b << endl;
                return 0;        
            }
        }
    }
  cout << -1 << " " << -1 << " " << -1 << endl;
}