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
	string s, t;
	cin >> s >> t;
	int a,b;
	a = abs(s[0]-s[1]);
	b = abs(t[0]-t[1]);
	if (s == "AE" || s == "EA"){
		a = 1;
	}
	if (t == "AE" || t == "EA"){
		b = 1;
	}
	if (t == "BE" || t == "EB"){
		b = 2;
	}
	if (s == "BE" || s == "EB"){
		a = 2;
	}
	if (s == "AD" || s == "DA"){
		a = 2;
	}
	if (t == "AD" || t == "DA"){
		b = 2;
	}

	if(a == b) cout << "Yes" << endl;
	else cout << "No" << endl;

	// cout << a << b << endl;
	return 0;
}