#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

ll solve(ll n){
	if (n == 1)
		return 1;
	if (n % 2)
		return 1 +solve(3 * n + 1);
	return 1 + solve(n / 2);
}

ll ans (ll i, ll j){
	if (i > j)
		return 0;
	return max(solve(i), ans(i + 1, j));
}


int main() {
	IO
	ll i, j;
	while (cin >> i >> j){
		cout << i << " " << j << " " << ans(min(i, j), max(i, j)) << "\n";
	}
	return 0;
}
