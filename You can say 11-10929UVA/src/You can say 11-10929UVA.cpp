#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	IO
	string n, ans;
	while (cin >> n){
		if (n == "0")
			break;
		ll sum = 0;
		ans = n;
		for (int i = 0; i < n.size(); i++){
			if (n[i] == '0')
				n[i] = 'z';
			else
				break;
		}
		for (int i = 0; i < n.size(); i++){
			if (n[i] == 'z')
				continue;
			int x = (n[i] - '0');
			if (i % 2)
				sum -= x;
			else
				sum += x;
			//cout << n[i] - '0' << ' ' << sum << '\n';
		}
		//cout << "sum = " << abs(sum) << '\n';
		if (abs(sum) % 11 != 0)
			cout << ans << " is not a multiple of " << 11 << '.';
		else
			cout << ans << " is a multiple of " << 11 << '.';
		cout << '\n';
	}
	//cout << '5' - '0';


	return 0;
}
