#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int main() {
	ll g;
	while (cin >> g){
		if (g == 0){
			break;
		}
		if (g == 1){
			cout << 1 << " = " << 1 << '\n';
			continue;
		}

		ll l = g;
		vector <ll> v;
		if (g < -1)
			v.push_back(-1);
		g = abs(g);
		for (ll i = 2; i * i <= g; i++){
			while (g % i == 0){
				v.push_back(i);
				g /= i;
			}
		}
		if (g > 1)
			v.push_back(g);
		cout << l << " = ";
		for (int i = 0; i < v.size(); i++){
			cout << v[i];
			if (i < v.size() - 1)
				cout << " x ";
		}
		cout << "\n";
	}
	return 0;
}
