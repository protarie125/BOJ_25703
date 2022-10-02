#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	cout << "int a;\n";
	cout << "int *ptr = &a;\n";
	for (auto i = 2; i <= n; ++i) {
		cout << "int ";
		for (auto j = 0; j < i; ++j) {
			cout << '*';
		}
		cout << "ptr" << i << " = &ptr";
		if (2 < i) {
			cout << i - 1;
		}
		cout << ";\n";
	}

	return 0;
}