#include <bits/stdc++.h>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	if (n % 4 == 1 || n % 4 == 2) {
		std::cout << "NO";
		return 0;
	}

	std::cout << "YES\n";

	if (n % 2 == 0) {
		std::cout << (n / 2) << '\n';
		for (int i = 1; i <= (n / 4); ++i) std::cout << i << ' ' << (n - i + 1) << ' ';
		std::cout << '\n' << (n / 2) << '\n';
		for (int i = (n / 4 + 1); i <= (n / 2); ++i) std::cout << i << ' ' << (n - i + 1) << ' ';
		return 0;
	}

	std::cout << (n / 2 + 1) << '\n';
	for (int i = 1; i <= ((n + 1) / 4); ++i) std::cout << i << ' ';
	for (int i = 0; i < (n / 4); ++i) std::cout << (n - i) << ' ';
	std::cout << (n / 2 + 1) << '\n';
	std::cout << (n / 2) << '\n';
	for (int i = ((n + 1) / 4 + 1); i <= (n / 2); ++i) std::cout << i << ' ';
	for (int i = (n / 2 + 2); i <= (n - (n / 4)); ++i) std::cout << i << ' ';

	return 0;
}
