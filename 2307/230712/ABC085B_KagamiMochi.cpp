#include <bits/stdc++.h>
using namespace std;

int N, d[110];

int main() {
    // 入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> d[i];
    
    int num[110] = {0};
    for (int i = 0; i < N; ++i) {
        num[d[i]]++;  // d[i] が 1 個増える
    }

    int res = 0;  // 答えを格納
    for (int i = 1; i <= 100; ++i) {  // 1 <= d[i] <= 100 なので 1 から 100 まで探索
        if (num[i]) {  // 0 より大きかったら
            ++res;
        }
    }
    
    cout << res << endl;
}