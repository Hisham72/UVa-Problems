#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

ll n, m;
ll x;
ll arr[] = {5, 10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000};
ll mem[11][40000], ans;

ll dp(int i, int sum){
    if (sum == 0) return 1;
    if (i >= 11 || sum < 0) return 0;
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
    while (scanf("%lld.%lld", &n, &m), n != 0 || m != 0){
        x = n * 100 + m;
        if (m == 0)
            printf("%3d.%d%d%17lld\n", n, m,0, dp(0, x));
        else if (m < 10)
            printf("%3d.%d%d%17lld\n", n, 0,m, dp(0, x));
        else
            printf("%3d.%d%17lld\n", n, m, dp(0, x));
    }
	return 0;
}
