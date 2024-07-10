#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

bool down_b(int i,vector<char> s){ 
	if(s[i] == 'S' && s[i-1] == 'S' && s[i+1] == 'S') return true;
	else return false;
}
bool down_p(int i,vector<char> s){ 
	if(s[i] == 'S' && s[i+1] == 'S') return true;
	else return false;
}
bool down(int i,vector<char> s){ 
	if(s[i] == 'S') return true;
	else return false;
}


int main()
{
	int n, k;
	cin >> n >> k;
	vector<char> s(n);
	rep(i,n) cin >> s[i];

	int ans = 0;
	rep2(i,1,n-1){
		if(down_b(i,s)){
			s[i] = '.';
			s[i-1] = '.';
			s[i+1] = '.';
			k--;
			if (k == 0) break;
			// cout << k << endl;
		}
	}
	if (k > 0){
		rep(i,n-1){
			if(down_p(i,s)){
				s[i] = '.';
				s[i+1] = '.';
				k--;
				if (k == 0) break;
			}
		}
	}
	if (k > 0){
		rep(i,n){
			if(down(i,s)){
				s[i] = '.';
				k--;
				if (k == 0) break;
			}
		}
	}
	rep(i,n){
		if (s[i] == '.') ans++;

	}
	cout << ans << endl;
	

	
	


	return 0;
}