#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	IO
	int n;
	cin >> n;
	for (int j = 1; j <= n; j++) {
		ll c, r, eaten;
		cin >> c >> r;
		vector<ll> v;
		eaten = c - r;
		cout << "Case #" << j << ":";
		if (eaten == 0){
			cout << " 0\n";
			continue;
		}
		for (ll i = 1; i * i <= eaten; i++){
			if (eaten % i == 0){
				if (eaten / i > r)
				v.push_back(eaten / i);
				if (i * i != eaten && i > r)
					v.push_back(i);
			}
		}
		sort(v.begin(), v.end());
		for (auto i : v){
			cout << " " << i;
		}
		cout << '\n';
	}
	return 0;
}
