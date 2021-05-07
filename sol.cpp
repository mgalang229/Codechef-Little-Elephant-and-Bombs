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
		for (int i = 0; i < n; i++) {
			if (i == 0 && s[i] == '1') {
				// if the current character is '1' and index is equal to 0,
				// then these are the changes in the string
				// store the next character in the 'original' variable
				char original = s[i + 1];
				// change the next character to '1'
				s[i + 1] = '1';
				if (original == '0') {
					// check if the next character is originally equal to '0',
					// if yes, then increase the index 'i' to skip it
					i++;
				}
			} else if (i == n - 1 && s[i] == '1') {
				// if the current character is '1' and the index is equal to n - 1,
				// then set the previous character to '1'
				s[i - 1] = '1';
			} else  if (s[i] == '1') {
				// store the next character in the 'original' variable
				char original = s[i + 1];
				// if the current character is equal to '1' and the index is not
				// equal to 0 or n - 1, then set the previous and next characters to '1'
				s[i - 1] = '1';
				s[i + 1] = '1';
				if (original == '0') {
					// check if the next character is originally equal to '0',
					// if yes, then increase the index 'i' to skip it
					i++;
				}
			}
		}
		cout << count(s.begin(), s.end(), '0') << '\n';
	}
	return 0;
}
