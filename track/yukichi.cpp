#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i,n) for(int i=0; i<(n); i++)
#define rep2(i,x,n) for(int i=x; i<(n); i++)
#define all(...) begin(__VA_ARGS__), end(__VA_ARGS__)
#define rall(...) rbegin(__VA_ARGS__), rend(__VA_ARGS__)
struct cww{cww(){ios::sync_with_stdio(false);cin.tie(0);}}star;
const long long INF = numeric_limits<long long>::max();

vector<vector<char>> bomb (vector<vector<char>> c, int i, int j, int n, int m){
	rep(k,m){
		c[i][k] = '*';
	}
	rep(k,n){
		c[k][j] = '*';
	}
	return c;
}

bool check_num (char c){
	return '1' <= c && c <= '9';
}

int main()
{
	int n, m, k;
	cin >> n >> m >> k;

	string s[n];
	vector<vector<char>> c(n,vector<char>(m));
	rep(i,n){
		cin >> s[i];
		rep(j,m){
			c[i][j] = s[i][j];
		}
	}

	vector<vector<char>> res(n,vector<char>(m));
	rep(i,n){
		rep(j,m){
			if(c[i][j] == 'B') res = bomb(res,i,j,n,m);
			else if (res[i][j] != '*')res[i][j] = 'x';
		}
	}

	vector<int> num_out;
	vector<int> num_in;
	rep(i,n){
		rep(j,m){
			if(res[i][j] == '*' && check_num(c[i][j])) num_out.push_back(c[i][j] - '0');
			if (res[i][j] == 'x' && check_num(c[i][j])) num_in.push_back(c[i][j]-'0');
		}

	}

	sort(all(num_out));
	sort(rall(num_in));
	int ni_end = num_in.size()-1;
	int no_end = num_out.size()-1;
	int ni_min, no_max;
	rep(i,k){
		if(ni_end >= 0 && no_end >= 0){
			if (num_in[ni_end] < num_out[no_end]){
				no_max = num_out[no_end];
				ni_min = num_in[ni_end];
				num_in.pop_back();
				num_out.pop_back();
				num_in.push_back(no_max);
				num_out.push_back(ni_min);
				sort(all(num_out));
				sort(rall(num_in));
			}
		}
	}
	int ans = 0;
	rep(i,num_in.size()) ans+= num_in[i];
	cout << ans << endl;

	
	return 0;
}