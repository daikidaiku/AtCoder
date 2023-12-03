#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using VI = vector<int>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(obj) (obj).begin(), (obj).end()
constexpr int DX[] = {1, 0, -1, 0};
constexpr int DY[] = {0, 1, 0, -1};
const long long INF = numeric_limits<long long>::max();
// constexpr int INF = 1 << 30;

int main()
{
	ll d;
	cin >> d;
	
	ll x,y,c;
	ll ans = INF,res=0;
	x = ceil(sqrt(d));
	rep(i,x+1){
		c = i*i-d;
		if(c < 0){
			y = ceil(sqrt(-1 * c));
			res = abs(y*y +c);
			ans =min(res,ans);
			y--;
			res = abs(y*y +c);
			ans =min(res,ans);
		}else{
			res = abs(c);
			ans =min(res,ans);
		}
		// cout << ans << endl;
	}

	cout << ans << endl;
	return 0;
}