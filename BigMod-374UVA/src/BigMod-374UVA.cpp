#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
ll b, p, m;
ll ans (ll b, ll p){
	if (p == 0)
		return 1;
	if (p == 1)
		return b;
	ll x = ans(b, p / 2);
	if (p % 2)
		return (((x * x) % m) * b) % m;
	else
		return ((x * x) % m);
}
int main() {
	while (cin >> b >> p >> m){
		cout << ans(b, p) << '\n';
	}
	return 0;
}
