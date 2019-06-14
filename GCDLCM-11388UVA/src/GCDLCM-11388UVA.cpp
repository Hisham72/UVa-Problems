#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
	IO
	int t;
	cin >> t;
	while (t--){
		ll a, b, gcd, lcm;
		cin >> a >> b;
		if (b % a){
			cout << -1 << '\n';
			continue;
		}
		else{
			cout << a << " " << b << '\n';
			//continue;
		}
		/*ll mul = a * b;
		bool found = 0;
		for (ll i = a; i * i <= mul; i++){
			if (mul % i == 0){
				gcd = __gcd(i, mul / i);
				lcm = mul / gcd;
				if (gcd == a && lcm == b){
					cout << i << " " << mul / i << '\n';
					found = 1;
					break;
				}
				while (mul % i == 0){
					mul /= i;
				}
			}
		}
		if (!found)
			cout << -1 << '\n';*/
	}
	return 0;
}
