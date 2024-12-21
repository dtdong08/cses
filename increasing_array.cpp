#include <bits/stdc++.h>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int n, res = 0;
	std::cin >> n;

	std::vector<int> x (n);
	for (int i = 0; i < n; ++i) std::cin >> x[i];

	for (int i = 1; i < n; ++i) {
		if (x[i] < x[i - 1]) {
			res += (x[i - 1] - x[i]);
			x[i] = x[i - 1];
		}
	}

	std::cout << res;

	return 0;
}
