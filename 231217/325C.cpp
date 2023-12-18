#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using VI = vector<int>;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(obj) (obj).begin(), (obj).end()
constexpr int dx[] = {1, 0, -1, 0, 1, -1, 1, -1};
constexpr int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};
// const long long INF = numeric_limits<long long>::max();
constexpr int INF = 1 << 30;

int main()
{
	int h, w;
	cin >> h >> w;
	vector<vector<char>> s(h,vector<char>(w));
	rep(i,h) rep(j,w) cin >> s[i][j];

	vector<vector<bool>> used(h,vector<bool> (w));
	int ans = 0;

	rep(i,h) {
		rep(j,w) {
			// cout << s[i][j] << " ";
			if (s[i][j] == '.' or used[i][j]) continue;
			queue<pair<int, int>> que;
			que.push({i,j});
			while(!que.empty()) {
				auto [x,y] = que.front();
				que.pop();
				rep(dir,8){
					int i2 = x + dx[dir];
					int j2 = y + dy[dir];
					if(0 <= i2 && i2 < h && 0 <= j2 && j2 < w && s[i2][j2] == '#' && !used[i2][j2]){
						used[i2][j2] = true;
						que.push({i2,j2});
					}
				}
			}
			ans++;
			
		}
		
	}
	cout  << ans << endl;
	return 0;
}