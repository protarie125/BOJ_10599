#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b, c, d;
	cin >> a >> b >> c >> d;
	while (0 != a || 0 != b || 0 != c || 0 != d) {
		cout << c - b << ' ' << d - a << '\n';

		cin >> a >> b >> c >> d;
	}

	return 0;
}