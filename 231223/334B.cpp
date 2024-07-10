#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using VI = vector<int>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(obj) (obj).begin(), (obj).end()
constexpr int dx[] = {1, 0, -1, 0};
constexpr int dy[] = {0, 1, 0, -1};
// const long long INF = numeric_limits<long long>::max();
constexpr int INF = 1 << 30;

ll floor(ll x, ll m) {
    ll r = (x % m + m) % m;
		// ll r = x % m;
		cout << r << endl;
    return (x - r) / m;
}

int main()
{
	ll a, l, r;
	ll m;
	cin >> a >> m >> l >> r;
	l -= a;
	r -= a;
	cout << -5 % 3 << endl;
	cout << (-5 % 3 + 3) % 3<< endl;
	// cout << l  << endl;
	// cout << r << endl;
	// ll mi, Ma;
	// mi = l/m * m;
	// Ma = r/m * m;
	// ll ans = (Ma - mi) / m + 1;

	// if (l == r && l % m != 0){
	// 	cout << 0 << endl;
	// 	return 0;
	// }
	// cout << ans << endl;
	return 0;
}