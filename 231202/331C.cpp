#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(obj) (obj).begin(), (obj).end()
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i,n) {
		cin >> a[i];
	}
	map<int, vector<int>> d;
	rep(i,n)d[a[i]].push_back(i);

	ll s = accumulate(all(a),0LL);
	vector<ll> ans(n);
	for(auto[v,i_list]:d){
		s-=(ll)v*i_list.size();
		for(auto i:i_list)ans[i] = s;
	}
	// sort(a.rbegin(), a.rend());
	// ll sum = 0;
	// ll res = 0;
	// int r = 1;
	// ll ans[n];
	// rep(k,n){
	// 	if(k == 0){
	// 				ans[a[k].second] = sum;
	// 				sum += (ll)a[k].first;
	// 				res = a[k].first;
	// 	}else{
	// 			if(res != a[k].first) {
	// 					ans[a[k].second] = sum;
	// 					r = 1;
	// 			}else{
	// 					sum -= (ll)res*r;
	// 					r++;
	// 					ans[a[k].second] = sum;
	// 			}
	// 		sum += (ll)a[k].first*r;
	// 		res = a[k].first;
	// 	}
	// }
	for(auto i : ans) cout << i << " " << endl;
	return 0;
}