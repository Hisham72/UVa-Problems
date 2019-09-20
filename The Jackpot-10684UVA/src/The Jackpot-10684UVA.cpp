#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) , n != 0){
		int arr[n];
		scanf("%d", &arr[0]);
		int local = arr[0], global = arr[0];
		for (int i = 1; i < n; i++){
			scanf("%d", &arr[i]);
			local = max(arr[i], local + arr[i]);
			global = max(global, local);
		}
		if (global > 0)
			printf("The maximum winning streak is %d.\n", global);
		else printf("Losing streak.\n");
	}
	return 0;
}
