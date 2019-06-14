#include <bits/stdc++.h>
#define ll long long
#define IO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=515
    int t, n;
    set<vector<int>> v;
    vector <int> temp;
void solve(int arr[], int idx, int sum){
    if (sum == t){
        v.insert(temp);
        return;
    }
    if (idx >= n)
        return;
    if (sum > t){
        return;
    }
    temp.push_back(arr[idx]);
    solve(arr, idx + 1, sum + arr[idx]);
    temp.pop_back();
    solve(arr, idx + 1, sum);
}
bool cmp(const int a, const int b){
    return a > b;
}
int main()
{
    //IO
    while (cin >> t >> n){
        if (n == 0)
            break;
        v.clear();
        temp.clear();
        int arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr + n, cmp);
        //vector<int> tmp;
        solve(arr, 0,0);
        cout << "Sums of " << t << ":\n";
        if (!v.empty()){
            vector<vector<int>> ans;
            for (auto i : v){
                ans.push_back(i);
            }
            reverse(ans.begin(), ans.end());
            for (auto i : ans){
                for (int j = 0; j < i.size(); j++){
                    cout << i[j];
                    if (j < i.size()-1)
                        cout << '+';
                }
                cout << '\n';
            }
        }
        else
            cout << "NONE\n";
    }
    return 0;
}
