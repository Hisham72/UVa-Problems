#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1285
ll arr[5];

bool solve(int idx,ll ans){
    if (idx == 5){
        if (ans == 23)
            return 1;
        else
            return 0;
    }
//    if (arr[idx] == x)
//        return solve(idx + 1, ans, x);
//    if (ans < 0)
//     return solve(idx + 1, ans +arr[idx]);
//    if (ans < 23)
//        return solve(idx + 1, ans + arr[idx])
//        || solve(idx + 1, ans * arr[idx]);
//    if (ans > 23)
//        return solve(idx + 1, ans - arr[idx]);
    return solve(idx + 1, ans + arr[idx])
        || solve(idx + 1, ans - arr[idx])
        || solve(idx + 1, ans * arr[idx]);
}

bool cmp(const int a, const int b){
    return a > b;
}
int main()
{
    //IO
    while (true){
        for (int i = 0; i < 5; i++){
            cin >> arr[i];
        }
        if (arr[0] == 0)
            return 0;
        bool valid = 0;
        sort(arr, arr+5);
        do{
            if (solve(1, arr[0])){
                cout << "Possible\n";
                valid = 1;
                break;
            }
        }while (next_permutation(arr, arr+5) && !valid);
        if (!valid)
        cout << "Impossible\n";
    }
    return 0;
}
