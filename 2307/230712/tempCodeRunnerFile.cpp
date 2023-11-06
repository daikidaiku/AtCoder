#include <bits/stdc++.h>
using namespace std;

int N, A, B;
vector<int> vec(110);

int main() {
    // 入力
    cin >> N;
    for (int i = 0; i < N; i++) cin >> vec.at(i);
    
    sort(vec.begin(), vec.end());
    unique(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    
    cout << vec.size() << endl;
}