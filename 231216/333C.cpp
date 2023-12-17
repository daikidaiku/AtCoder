#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using VI = vector<int>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(obj) (obj).begin(), (obj).end()
constexpr int DX[] = {1, 0, -1, 0};
constexpr int DY[] = {0, 1, 0, -1};
// const long long INF = numeric_limits<long long>::max();
constexpr int INF = 1 << 30;
bool alth(string s){
	rep(i,s.size()){
		if (s[i] != '3') return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	string ans = "3";
	if(n > 1){
		int l = n%3;
		char L =l-'0';
		ans = L + ans;
	}
	
	n--;
	rep(i,n){
		if(ans[0] == '3') {
			rep(i,ans.size()-1){
				ans[i] = '1';
			}
			ans = '1' + ans;
			
		}
		else{
			int j = 1;
			while(true){
				if(ans[j] == '3')break;
				j++;
			}
			// ans[j] -= 1;
			ans[j-1] +=1;
			
		}
		cout << ans << endl;
	}
	cout << ans << endl;
	return 0;
}