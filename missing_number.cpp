#include <bits/stdc++.h>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int n, a;
	std::cin >> n;

	int res = (n * (n + 1) >> 1);

	for (int i = 0; i < (n - 1); ++i) {
		std::cin >> a;
		res -= a;
	}

	std::cout << res;

	return 0;
}
