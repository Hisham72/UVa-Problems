#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

ll nCr (ll n, ll r) {
	ll ans = 1;
	for (ll i = n, j = 1; i >= n - r + 1; i--, j++){
		ans *= i;
		ans /= j;
	}
	return ans;
}

int main() {
	IO
	int t;
	ll k, coff;
	string s;
	cin >> t;
	for (int w = 1; w <= t; w++) {
		cin >> s;
		string a = "" , b = "", sk = "";
		int i = 1;
		for (; s[i] != '+'; i++){
			a += s[i];
		}
		for (++i; s[i] != ')'; i++){
			b += s[i];
		}
		for (i+=2; i < s.size(); i++){
			sk += s[i];
		}
		k = stoll(sk);
		cout << "Case " << w << ": ";
		for (ll j = 0, y = k; j <= k; j++, y--) {
			coff = nCr(k, j);
			if (j > 0)
				cout << '+';
			if (coff != 1)
				cout << coff << "*";
			if (y > 0)
				cout << a;
			if (y > 1)
				cout << "^" << y;
			if (j > 0){
				if (y > 0)
				cout << "*";
				cout << b;
			}
			if (j > 1)
				cout << "^" << j;
		}
		cout << '\n';
	}
	return 0;
}
