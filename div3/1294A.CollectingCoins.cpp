#include <iostream>
#include <vector>

using namespace std;

void solve() {
	int t;
	cin >> t;

	int a,b,c,n;
	vector<int> list;
	while(t--) {
		list.clear();
		cin >> a >> b >> c >> n;
		list.emplace_back(a);
		list.emplace_back(b);
		list.emplace_back(c);
		int max = *max_element(list.begin(), list.end());
		int diff = (max - a) + (max - b) + (max - c);
		if(n < diff) cout << "NO\n";
		else if(n == diff) cout << "YES\n";
		else if((n - diff) % 3 == 0) {
			cout << "YES\n";		
		} else {
			cout << "NO\n";
		}
	}
}

int main() {
	solve();
	return 0;
} 
