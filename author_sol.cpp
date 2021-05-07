#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		string s;
		cin >> n >> s;
		int saved_count = 0;
		for (int i = 0; i < n; i++) {
			bool destroyed = false;
			if (s[i] == '1') {
				// if the current character is 1', then set 'destroyed' to true
				destroyed = true;
			}
			// the conditions below occurs if the loop encounters a '0'
			if (i > 0 && s[i - 1] == '1') {
				// if 'i' is greater than 0 (first element will be skipped),
				// and the previous character is '1', then current character will be destroyed
				destroyed = true;
			}
			if (i < n - 1 && s[i + 1] == '1') {
				// if 'i' is less than (n - 1) (last character will be skipped),
				// and the next character is '1', then the current character will be destroyed
				destroyed = true;
			}
			if (!destroyed) {
				// if the current character is not destroyed, then increment 'saved_count'
				saved_count++;
			}
		}
		cout << saved_count << '\n';
	}
	return 0;
}
