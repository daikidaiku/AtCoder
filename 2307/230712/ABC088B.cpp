#include <bits/stdc++.h>
using namespace std;

int N, A, B;

int main() {
    vector<int> Z(110);
    cin >> N;
    for (int i = 0; i < N; i++) cin >> Z.at(i);

    sort(Z.begin(), Z.end());
    int j = 0;
    while (Z.empty() != true)
    {
        if (j % 2 == 0){
            A += Z.back();
            Z.erase(Z.end()-1);
        }
        if (j % 2 == 1){
            B += Z.back();
            Z.erase(Z.end()-1);
        }
        j += 1;
    }
    cout << A-B << endl;
}