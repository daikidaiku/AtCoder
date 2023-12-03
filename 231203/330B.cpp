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
	int n;
	ll l, r;
	cin >> n >> l >> r;
	ll a[n]; 
	ll ans[n];
	rep(i,n) cin >> a[i];
	rep (i,n){
		if (a[i] <= l) ans[i] = l;
		else if (a[i] >= r) ans[i] = r;
		else ans[i] = a[i];
	}
	rep(i,n)cout << ans[i] << " ";
	cout << endl;
	return 0;
}