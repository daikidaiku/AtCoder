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
	
	int x;
	double y;
	ll c;
	int res1,res2;
	ll ans = INF,res=0;
	x = ceil(sqrt(d));
	for(ll i= 0; i < x+1;i++){
		c = i*i-d;
		if(c < 0){
			y = sqrt(-1 * c);
			res1 =abs(ceil(y)*ceil(y) + c);
			res2 =abs(int(y)*int(y) + c);
			res = min(res1,res2);
			ans = min(res,ans);
		}else{
			res = abs(c);
			ans = min(res,ans);
		}
		// cout << ans << endl;
	}

	cout << ans << endl;
	return 0;
}