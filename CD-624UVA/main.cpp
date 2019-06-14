#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=565
int n, t;
ll ans = 0;
vector<int> v;
void solve(int arr[],int idx,vector<int> tmp, ll sum){
    if (idx == t){
        if (sum <= n && sum > ans){
            v = tmp;
            ans = sum;
        }
        return;
    }
    tmp.push_back(arr[idx]);
    solve(arr, idx + 1, tmp, sum + arr[idx]);
    tmp.pop_back();
    solve(arr, idx + 1, tmp, sum);
}

bool cmp(const int a, const int b){
    return a > b;
}
int main()
{
    //IO
    while (cin >> n >> t){
        int arr[t];
        ans = 0;
        for (int i = 0; i < t; i++){
            cin >> arr[i];
        }
        vector<int> tmp;
        solve(arr, 0, tmp, 0);
        for (auto i : v){
            cout << i << " ";
        }
        cout << "sum:" << ans << "\n";
    }
    return 0;
}
