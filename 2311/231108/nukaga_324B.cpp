#include<bits/stdc++.h>
using namespace std;

long npow(int B, int N){    
    long i, ans = 1;
    for(i=0; i<N; i++){
        ans *= B; 
    }
    return ans;
}

int main(){

    long N =0;
    cin >> N;
    
    int xlimit =0, ylimit =0;
    // x,yの最大値を求める
    for (int i=0; i< 100; i++){
        if(npow(2,i) > N){
            xlimit = i-1;
            break;
        }
    }

    for (int i=0; i< 100; i++){
        if(npow(3,i) > N){
            ylimit = i-1;
            break;
        }
    }

    for (int i = 0; i < ylimit+1; i++) {
        for (int j = 0; j < xlimit+1; j++) {
            if(npow(3,i) * npow(2,j) == N){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}