#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int cnt;
	cin >> cnt;
	vector<int> num(cnt);
	for (int i = 0; i < cnt; i++) {
		cin >> num[i];
	}
	if (next_permutation(num.begin(), num.end()) == true) {
		for (int i = 0; i < cnt; i++) {
			cout << num[i] << ' ';
		}
	}
	else {
		cout << -1;
	}
	return 0;
}