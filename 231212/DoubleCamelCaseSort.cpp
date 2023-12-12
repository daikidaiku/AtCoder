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
	string s;
	cin >> s;
	int n = s.size();

	vector<string> words;
	
	rep(i,n){
		int j = i+1;
		while(j < n && islower(s[j])){
			j++;
		}
		string word = s.substr(i,j+1-i);
		word[0] = tolower(word[0]);
		word.back() = tolower(word.back());
		words.push_back(word);

		i = j+1;
	}
	sort(all(words));
	string ans = "";
	for(auto word : words){
		word[0] = toupper(word[0]);
		word.back() = toupper(word.back());
		
		ans += word;
	}

	cout << ans << endl;
	return 0;
}