#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
// const long long INF = numeric_limits<long long>::max();
int main()
{
	int n;
	cin >> n;
	vector<pair<int, int>> a(n);
	rep(i,n) {
		cin >> a[i].first;
		a[i].second = i;
	}
	sort(a.rbegin(), a.rend());
	int sum = 0;
	int res = 0;
	int ans[n];
	rep(k,n){
		
		ans[a[k].second] = sum;
		if(a[k].first != res) sum += a[k].first;
		res = a[k].first;
	}
	rep(i,n)cout << ans[i] << endl;
	return 0;
}