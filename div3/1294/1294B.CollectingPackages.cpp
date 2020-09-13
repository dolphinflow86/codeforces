#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	
	while(t--) {
		int n;
		cin >> n;
		vector<pair<int, int>> list;
		int rx = 0, ry = 0;
		
		while(n--) {
			int x, y;
			cin >> x >> y;
			list.emplace_back(make_pair(x,y));
		}
		
		
	}
	return 0;
}


