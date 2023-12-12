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
	int n, m, q;
	cin >> n >> m >> q;
	vector<vector<int>> g(n);
	
	rep(i,m){
		int u,v;
		cin >> u >> v;
		u--;
		v--;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	vector<int> c(n);
	rep(i,n){
		cin >> c[i];
	}
	int x,y;
	rep(i,q){
		int s;
		cin >> s;
		switch (s)
		{
		case 1:
			cin >> x;
			x--;
			cout << c[x] << endl;
			for(auto& i : g[x]){
				c[i] = c[x];
			}
			break;
		
		case 2:
			cin >> x >> y;
			x--;
			cout << c[x] << endl;
			c[x] = y;
			break;
		}
	}
	

	return 0;
}