#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	IO
	string s, s0;
	while (cin >> s) {
		ll mx, mn, k;
		sort(s.begin(), s.end());
		s0 = s;
		for (int i = 0; i < s.size(); i++){
			if (s[i] != '0'){
				swap(s[0], s[i]);
				break;
			}
		}
		mn = stoll(s);
		reverse(s0.begin(), s0.end());
		mx = stoll(s0);
		k = mx - mn;
		cout << mx <<  " - " << mn << " = " << k << " = 9 * " << k / 9 << '\n';
	}
	return 0;
}
