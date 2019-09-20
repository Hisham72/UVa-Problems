#include <bits/stdc++.h>
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;

int ans[500001], cur = 2;
void pre(){
	ans[1] = 1;
	for (int i = 2; i <= 500000; i++){
		ans[i] = cur;
		if (i == cur) cur = 2;
		else cur += 2;
	}
}


int main() {
	IO
	pre();
	int n;
	while (cin >> n, n != 0){
		cout << ans[n] << '\n';
	}
	return 0;
}
