#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();
int main()
{
	ll h, a, b;
	cin >> h >> a >> b;
	if (h <= a){
		cout << "YES" << endl;
		cout << 1 << endl;
	}else if(a < b){
		cout << "NO" << endl;
	}else{
		ll ans = h / (a-b);
		h -= ans/2 * (a-b);
		while(h > 0){
      ans++;
			h -= a;
			if (h <= 0){
				cout << "YES" << endl;
				cout << ans << endl;
        break;
			}
			h += b;

		}
		// if (h > a) ans += 2;
		// else ans++

		// cout << h << endl;
		;
	}
}