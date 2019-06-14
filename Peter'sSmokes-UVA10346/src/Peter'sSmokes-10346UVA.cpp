#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;



int main() {
	//IO
	ll n, k;
	while (cin >> n >> k){
		ll ans = n, remain = n % k;
		n /= k;
		while (n > 0){
			ans += n;
			remain += n % k;
			if (remain >= k){
				int r = remain / k;
				ans += r;
				remain %= k;
				remain += r;
			}
			n /= k;
		}
		cout << ans << "\n";
	}
	return 0;
}
