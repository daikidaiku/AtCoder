#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pint = pair<int,int>;
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
	int n, m;
	cin >> n >> m;
	vector<vector<char>> meiro(n,vector<char>(m));

	int sx, sy, gx, gy;
	rep(i,n){
		string s;
		cin >> s;
		rep(j,m){
			meiro[i][j]=s[j];
			if (s[j] == 'S'){
				sx = i;
				sy = j;
			} else if (s[j] == 'G'){
				gx = i;
				gy = j;
			}
		}
	}

	// vector<vector<int>> dist(n, vector<int>(m));
	// vector<tuple<int, int,int>> dist;
	// vector<vector<int>> nodes;
	// dist.emplace_back(start[0], start[1], 0);
	// nodes.emplace_back(0);
	queue<tuple<int,int,int>> que;
	vector<vector<int>> dist(n, vector<int>(m, -1));
	int res = 0;
	que.push({sx, sy,res});
	dist[sx][sy] = 0;

	// int k = 0;
	while(!que.empty()) {
		auto [x,y,w] = que.front();
		que.pop();
		// 4 方向への移動を試す
		for (int dir = 0; dir < 4; ++dir) {
			int x2 = x + dx[dir];
			int y2 = y + dy[dir];
			int w2 = w;
			// 新たなマスが場外の場合はダメ
			if (x2 < 0 || x2 >= n || y2 < 0 || y2 >= m) continue;
			
			// 新たなマスが壁の場合はダメ
			// if (meiro[x2][y2] == '#') continue;
			
			// 新たなマスが訪問済みの場合はスキップ
			if (dist[x2][y2] != -1) {
				if(meiro[x2][y2]=='.'||meiro[x2][y2]=='G'){
					if (dist[x2][y2] <= dist[x][y] + 1) continue;
				}else{
					if (dist[x2][y2] <= dist[x][y] + w + 1) continue;
				}
				
				// continue;
			}
			// 新たなマスを訪問する
			
			switch (meiro[x2][y2])
			{
			case '.':
				dist[x2][y2] = dist[x][y] + 1;
				break;
			case 'G':
				dist[x2][y2] = dist[x][y] + 1;
				break;
			case '#':
				dist[x2][y2] = dist[x][y] + w2 + 1;
				w2++;
				break;
			}
			que.push({x2, y2,w2});
			
			// if(meiro[x2][y2] == '.' || meiro[x2][y2] == 'G'){
			// 	dist[x2][y2] = dist[x][y] + 1;
			// }else{
			// 	dist[x2][y2] = dist[x][y] + res + 1;
			// 	res++;
			// }

		// rep(i,n){
		// 	rep(j,m){
		// 		cout << dist[i][j] << " ";
		// 	}
		// 	cout << endl;
		// }
		// cout << endl;
		}
	}
	// rep(i,n){
	// 	rep(j,m){
	// 		cout << dist[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	cout << dist[gx][gy] << endl;

	// rep(i,n){
	// 	rep(j,m){
	// 		cout << meiro[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }


	// cout << start[0] << start[1] << endl;
	// cout << goal[0] << goal[1] << endl;
	return 0;
}