#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;

	while(t--) {
		int n;
		cin >> n;
		vector<pair<int, int>> points;
		vector<char> results;
		int rx = 0, ry = 0;
		int ix, iy;

		while(n--) {
			cin >> ix >> iy;
			points.emplace_back(make_pair(iy,ix));
		}

		sort(points.begin(), points.end());

		bool isPossible = true;
		for(int i = 0; i < points.size(); ++i) {
			int y = points[i].first;
			int x = points[i].second;

			if(x < rx) {
				isPossible = false;
				break;
			}

			int yDist = y - ry;
			int xDist = x - rx;
			ry = y;
			rx = x;
			while(xDist--) results.emplace_back('R');
			while(yDist--) results.emplace_back('U');
		}	

		if(!isPossible) {
			cout << "NO\n";
			continue;
		} else {
			cout << "YES\n";
			for(int i = 0; i < results.size(); ++i) {
				cout << results[i];
			}
		}
		cout << "\n";
	}
	return 0;
}
