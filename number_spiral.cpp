#include <bits/stdc++.h>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int t, x, y;
	std::cin >> t;

	// while (t--) {
	// 	std::cin >> y >> x;
	// 	if (y == x) {
	// 		std::cout << (x * x - x + 1) << '\n';
	// 	} else if (y > x) {
	// 		if (y % 2 == 0) {
	// 			std::cout << (y * y - y + 1 + (y - x)) << '\n';
	// 		} else {
	// 			std::cout << (y * y - y + 1 - (y - x)) << '\n';
	// 		}
	// 	} else {
	// 		if (x % 2 == 0) {
	// 			std::cout << (x * x - x + 1 - (x - y)) << '\n';
	// 		} else {
	// 			std::cout << (x * x - x + 1 + (x - y)) << '\n';
	// 		}
	// 	}
	// }
	
	while (t--) {
		std::cin >> y >> x;
		std::cout << (std::max(x, y) * std::max(x, y) - std::max(x, y) + 1 + ((std::max(x, y) % 2 == 0) ? (y - x) : (x - y))) << '\n';
	}

	return 0;
}
