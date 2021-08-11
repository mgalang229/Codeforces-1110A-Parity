#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int b, k;
	cin >> b >> k;
	vector<int> a(k);
	for (int i = 0; i < k; i++) {
		cin >> a[i];
	}
	// view the image in this repository for better understanding
	int odd = 0;
	for (int i = 0; i < k; i++) {
		// if the current number is odd and its position is in the last or b 
		// is an odd number, then the result of this expression is also odd
		if ((a[i] % 2 == 1) && (i == k - 1 || b % 2 == 1)) {
			odd++;
		}
	}
	cout << (odd % 2 == 0 ? "even" : "odd") << '\n';
	return 0;
}
