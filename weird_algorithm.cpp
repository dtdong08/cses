#include <iostream>
#include <cstdint>
#include <cstdio>

#define int std::int64_t

signed main () {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	
	int N;
	std::cin >> N;

	if (N != 1) {
		while (N != 1) {
			std::cout << N << ' ';
			if (N & 1) N = ((3 * N) + 1);
			else N >>= 1;
		}
	}

	std::cout << 1;

	return 0;
}
