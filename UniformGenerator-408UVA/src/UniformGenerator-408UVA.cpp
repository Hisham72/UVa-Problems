#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int main() {
	ll s, m;
	while (cin >> s >> m){
		vector<ll> v;
		ll x = 0;
		v.push_back(0);
		while (true){
			x = ((x % m) + (s % m)) % m;
			if (x == 0)
				break;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		bool valid = 1;
		for (int i = 0; i < v.size(); i++){
			if (i != v[i])
				valid = 0;
		}
		if (v.size() < m)
			valid = 0;
			cout << setw(10) << s << setw(10) << m ;
		if (valid)
			 cout << "    Good Choice\n\n";
			 else
				 cout << "    Bad Choice\n\n";
	}
	return 0;
}
