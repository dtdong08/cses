#include <bits/stdc++.h>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	std::string S;
	std::cin >> S;

	int n = S.length();
	int l = 1;
	int res = 0;

	for (int i = 1; i < n; ++i) {
		if (S[i] == S[i - 1]) ++l;
		else {
			res = std::max(l, res);
			l = 1;
		}
	}

	std::cout << std::max(l, res);

	return 0;
}
