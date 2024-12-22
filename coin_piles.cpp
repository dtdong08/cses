#include <bits/stdc++.h>

#define int std::int64_t

bool isPossible (int a, int b) {
	if (a < b) std::swap(a, b);
	if (2 * b < a) return false;
	if (((a - 2 * b) % 3 == 0) && ((b - 2 * a) % 3) == 0) return true;
	return false;
}

	signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int t, a, b;
	std::cin >> t;

	while (t--) {
		std::cin >> a >> b;
		if (isPossible(a, b)) std::cout << "YES\n";
		else std::cout << "NO\n";
	}

	return 0;
}
