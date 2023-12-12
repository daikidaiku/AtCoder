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
	int n, s, k;
	cin >> n >> s >> k;
	int p, q;
	int ans = 0;
	rep(i,n){
		cin >> p >> q;
		ans += p * q;
	}
	if(ans >= s)cout << ans << endl;
	else cout << ans + k << endl;
	return 0;
}