#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int main() {
	//IO
	ll g;
	string x = " x ";
	while (cin >> g){
		if (g == 0)
			return 0;
		if (g == 1){
			cout << 1 << " = " << 1 << '\n';
			continue;
		}
		cout << g << " = ";
		vector <ll> v;
		if (g < 0)
			cout << -1 << x;
		g = abs(g);
		while (g % 2 == 0){
			v.push_back(2);
			g /= 2;

		}
		for (ll i = 3; i * i <= g; i += 2){
			while (g % i == 0){
				v.push_back(i);
				g /= i;
			}
		}
		if (g > 0)
			v.push_back(g);
		cout << v[0];
		for (int i = 1; i < v.size(); i++){
			cout << x << v[i];
		}
		cout << '\n';

	}
	return 0;
}
