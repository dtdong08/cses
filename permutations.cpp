#include <bits/stdc++.h>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	if (n == 1) {
		std::cout << 1;
	} else if (n <= 3) {
		std::cout << "NO SOLUTION";
	} else if (n == 4) {
		std::cout << "3 1 4 2";
	} else {
		for (int i = 1; i <= n; i += 2) std::cout << i << ' ';
		for (int i = 2; i <= n; i += 2) std::cout << i << ' ';
	}

	return 0;
}
