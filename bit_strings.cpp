#include <bits/stdc++.h>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	int n, MOD = 1'000'000'007;
	std::cin >> n;

	int res = 1;

	while (n--) res = (res << 1) % MOD;

	std::cout << res;
	
	return 0;
}
