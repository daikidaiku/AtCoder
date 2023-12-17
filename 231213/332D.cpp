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
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h,vector<int>(w));
	vector<vector<int>> b(h,vector<int>(w));
	map<int,int> numA;
	map<int, int> numB;
	rep(i,h) rep(j,w) cin >> a[i][j];
	rep(i,h) rep(j,w) cin >> b[i][j];

	rep(i,h){
		rep(j,w){
			numA[a[i][j]]++;
			numB[b[i][j]]++;
		}
	}
	if(numA == numB)cout << "Yes" << endl;
	else cout << "No" << endl;
	

	return 0;
}