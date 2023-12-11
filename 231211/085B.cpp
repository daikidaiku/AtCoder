// 連想配列
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
	cin >> n;
	vector<int> exist(101,0);
	
	rep(i,n){
		int d;
		cin >> d;
		exist[d] = 1;
	}

	int ans = 0;
	for(auto val : exist){
		ans += val;
	}
	cout << ans << endl;

	
	return 0;
}