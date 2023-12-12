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
	int k, g, m;
	cin >> k >> g >> m;
	int glass = 0, mag = 0;
	rep(i,k){
		if (glass == g)glass = 0;
		else if (mag == 0) mag = m;
		else{
			if(g - glass <= mag){
				int res = g - glass;
				glass = g;
				mag -= res;
			}else{
				glass += mag;
				mag = 0;
			}
		}
		// cout << glass << " " << mag << endl;
	}

	cout << glass << " " << mag << endl;
	return 0;
}