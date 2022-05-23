#include <bits/stdc++.h>

using namespace std;

bool IsFriend(int x, int y, int k) {
	int diff = 0;
	while (x > 0 || y > 0) {
		int num_x = x % 2;
		int num_y = y % 2;
		diff += (num_x != num_y);
		x /= 2;
		y /= 2;
	}
	return (diff <= k);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, m, k;
	cin >> n >> m >> k;
	vector<int> x(m + 1);
	for (int i = 0; i < m + 1; i++) {
		cin >> x[i];
	}
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		cnt += IsFriend(x[i], x[m], k);
	}
	cout << cnt << '\n';
	return 0;
}
