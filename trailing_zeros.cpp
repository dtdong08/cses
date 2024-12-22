#include <bits/stdc++.h>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int n;
	std::cin >> n;

	int res = 0;

	for (int x = 5; x <= n; x *= 5) res += (n / x);

	std::cout << res;

	return 0;
}
