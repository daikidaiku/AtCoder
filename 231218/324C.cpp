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

ll calc(string s, string t){
	rep(i,t.size()){
		if (i >= s.size()) return s.size();
		if(s[i] != t[i]) return i;
	}
	return t.size();
}

bool check(int a, int b,string t,string s){
	return a == s.size() && t.size() == s.size() || 
					a + b >= s.size() && s.size() + 1 == t.size() ||
					a + b >= s.size() - 1 && s.size() - 1 == t.size() ||
					a + b == s.size() - 1 && s.size() == t.size();
} 

int main()
{
	int n;
	cin >> n;
	string t;
	cin >> t;
	int len_t = t.size();
	string s;
	vector<int> res;
	int ans = 0;
	int a, b;
	rep(i,n) {
		cin >> s;
		int len_s = s.size();
		a = calc(s, t);
		reverse(all(t));
		reverse(all(s));
		b = calc(s, t);
		reverse(all(t));
		reverse(all(s));
		if (check(a,b,t,s)) {
			res.push_back(i+1);
			ans++;
		}
	}
	cout << ans << endl;
	for(auto i :res){
		cout << i << " ";
	}
	cout << endl;

	
	return 0;
}