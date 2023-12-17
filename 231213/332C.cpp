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
	int n, m;
	cin >> n >> m;
	
	string s;
	cin >> s;

	vector<pair<int, int>> res;
	rep(i,n){
		int j = i;
		int x=0, y=0;
		while(j < n && s[j] != '0'){
			if(s[j] == '1') x++;
			else y++;
			j++;
		}
		res.emplace_back(x,y);
		i = j;
	}

	int maxT = 0;
	int maxlogo = 0;
	int ans = 0;
	for(auto p : res){
		// cout << p.first << " " << p.second << endl;
		int mujiAll = m;
		int mujiT = p.first;
		int logoT = 0;

		if(m < p.first) logoT += p.first - m;
		logoT += p.second;
		ans = max(ans,logoT);
		// cout << ans << endl;
	}
	cout << ans << endl;


	return 0;
}