#include <bits/stdc++.h>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int n, res;
	std::cin >> n;

	std::array<int, 9> edgeCases { -1, 0, 6, 28, 96, 252, 550, 1056, 1848 };

	for (int k = 1; k <= 8; ++k) {
		if (k > n) return 0;
		else std::cout << edgeCases[k] << '\n';
	}

	for (int k = 9; k <= n; ++k) {
		res = 0;
		res += (4 * 2);
		res += (16 * 3);
		res += (4 * (k - 6) * 4);
		res += (4 * 4);
		res += (4 * (k - 4) * 6);
		res += ((k - 4) * (k - 4) * 8);
		std::cout << ((k * k) * (k * k - 1) / 2 - res / 2 - 4) << '\n';
	}

	return 0;
}
