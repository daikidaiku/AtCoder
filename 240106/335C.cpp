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

int main()
{
	int n, q;
	cin >> n >> q;
	deque<pair<int,int>> ryu;
	// vector<pair<int,int>> ryu;
	rep(i,n) ryu.push_back({i+1,0});
	// rep(i,n) cout << ryu[i].first << ryu[i].second << endl;
	int x; 
	int res_x, res_y;
	rep(i,q){
		cin >> x;
		if (x == 1){
			char t;
			cin >> t;
			res_x = ryu[0].first;
			res_y = ryu[0].second;
			ryu.pop_back();
			switch (t)
			{
			case 'R':
				res_x++;
				break;
			case 'L':
				res_x--;
				break;
			case 'U':
				res_y++;
				break;
			case 'D':
				res_y--;
				break;
			}
			pair<int,int> r;
			r.first = res_x;
			r.second = res_y;
			ryu.push_front(r);
		}else{
			int y;
			cin >> y;
			y--;
			cout << ryu[y].first << " " << ryu[y].second << endl;
		}
	} 
	return 0;
}