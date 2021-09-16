#include <bits/stdc++.h>
#include <complex>
#include <cmath>
#define ll long long
#define ld long double
#define endl '\n'
#define umap unordered_map
#define uset unordered_set
#define pque priority_queue
#define all(x) x.begin(), x.end()
#define H ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define io(x) freopen(x, "w", stdout);

using namespace std;
const ll mod = 1000000007;
const int N = 1e3 + 5, lg = 20;



int main() {
    H
	//io("out.txt");
	string s;
	set<string> st;
	st.begin();
	while (cin >> s){
		string add;
		for (auto &i : s){
			if (i >= 'a' && i <= 'z' || i >= 'A' && i <= 'Z') add.push_back(tolower(i));
			else {
				if (add.size()) st.insert(add), add.clear();
			}
		}
		if (add.size())
			st.insert(add);
	}
	for (auto &i : st) cout << i << endl;
    return 0;
}
