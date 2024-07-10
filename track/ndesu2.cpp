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

int main()
{
	ll l, r;
	cin >> l >> r;
	int m;
	cin >> m;
	vector<int> n(m);
	rep(i,m) {
		cin >> n[i];
		if (n[i] == 1){
			cout << 0 << endl;
			return 0;
		}
	}
	
	ll ans = r - l + 1;
	// vector<int> res;

	// rep(i,m){
	// 	rep2(j,i+1,m){
	// 		if(i != j){
	// 			if (n[i] % n[j] == 0){
	// 				res.push_back(i);
	// 				// cout << i << endl;
	// 			}else if(n[j] % n[i] == 0){
	// 				res.push_back(j);
	// 			}
				
	// 		}
	// 	}
	// }

	// sort(res.rbegin(),res.rend());
	// rep(i,res.size()){
	// 	n.erase(n.begin() + res[i]);
	// }

	ll A = 0;
	ll res = 0;
	rep(i,m){
		ll L = l/n[i];
		if(l%n[i] != 0) L++;
		ll R = r/n[i];
		A += R-L+1;
		for (ll j = L; j <= R; j++){
			rep(k,m){
				if (j*n[i] % n[k] == 0 && i != k) {
					res++;
				}
			}
		}
		
	} 
	cout << res << endl;
	cout << ans << endl;
	cout << A << endl;
	cout << res << endl;
	cout << ans - A+res/2 << endl;





	// for (ll i = l; i <= r; i++){
	// 	for (auto& j : n){
	// 		if(i % j == 0) {
	// 			ans--;	
	// 			break;
	// 		}

	// 	}
	// }
	// cout << ans << endl;
	return 0;
}