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
	int n;
	cin >> n;
	
	vector<vector<string>> ryu(n,vector<string>(n,"0"));
	// string ryu[n][n];
	// vector<vector<int>> res(n,vector<int>(n));
	int dist[n][n];
	rep(i,n)rep(j,n) dist[i][j] = -1;

	rep(i,n){
		rep(j,n){
			if (i+1 == (n+1)/2 && j+1 == (n+1)/2){
				ryu[i][j] = "T";
			}
		}
	}

	stack<pair<int,int>> st;
	st.push({0,0});
	int count = 1;
	dist[0][0] = 1;
	ryu[0][0]= "1";

	while(!st.empty()){
		auto [x,y] = st.top();
		st.pop();
		// cout << x << " " << y << endl;
		dist[x][y] = count;
		count++;
		for (int dir = 0;dir < 4; ++dir){
			int x2 = x + dx[dir];
			int y2 = y + dy[dir];

			if(x2 < 0 || x2 >= n || y2 < 0 || y2 >= n) continue;

			if(dist[x2][y2] != -1) continue;

			if(ryu[x2][y2] == "T") continue;
			// if(dist[x2][y2] > count) continue;

			ryu[x2][y2] = to_string(count);
			
			// cout << x2 << " " << y2 << endl;
			st.push({x2,y2});
		}
		
	}

	rep(i,n){
		rep(j,n){
			cout << ryu[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}