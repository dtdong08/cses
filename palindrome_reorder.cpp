#include <bits/stdc++.h>
#include <string>
#include <unordered_map>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cout.tie(nullptr);
	std::cin.tie(nullptr);

	std::string S;
	std::cin >> S;

	std::unordered_map<char, int> mp {};

	for (char c : S) ++mp[c];

	int odd = 0;
	char odd_c;

	for (auto& p : mp) {
		if (p.second & 1) {
			++odd;
			odd_c = p.first;
			--p.second;
		}
	}

	if (odd >= 2) {
		std::cout << "NO SOLUTION\n";
		return 0;
	}
	
	std::string res {};

	for (char c = 'A'; c <= 'Z'; ++c) {
		for (int i = 0; i < (mp[c] / 2); ++i) {
			res += c;
		}
	}

	if (odd == 1) res += odd_c;

	for (char c = 'Z'; c >= 'A'; --c) {
		for (int i = 0; i < (mp[c] / 2); ++i) {
			res += c;
		}
	}

	std::cout << res;

	return 0;
}
