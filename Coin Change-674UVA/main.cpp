#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

ll n, m;
ll x;
ll arr[] = {1, 5, 10, 25, 50};
ll mem[5][8000];

ll dp(int i, int sum){
    if (sum == 0) return 1;
    if (i >= 5 || sum < 0) return 0;
    ll& ret = mem[i][sum];
    if (~ret) return ret;
    ret = 0;
    for (ll j = 0;; j++){
        ll tmp = j * arr[i];
        if (sum - tmp < 0)
            break;
        ret += dp(i + 1, sum - tmp);
    }
    return ret;
}

int main() {
	//IO
	memset(mem, -1, sizeof mem);
    while (cin >> n){
        if (n == 0){
            printf("%d\n", 0);
            continue;
        }
        printf("%lld\n", dp(0, n));
    }
	return 0;
}
