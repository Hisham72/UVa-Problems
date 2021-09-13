#include <bits/stdc++.h>
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
const int N = 1e5 + 5, lg = 20;



int main() {
	H
	//io("out.txt");
	int n;
	cin >> n;
	cin.ignore();
	while (n--){
		string s;
		getline(cin, s);
		stack<char> st;
		bool valid = 1;
		for (auto &i : s){
			if (i == '(' || i == '[') st.push(i);
			else if (i == ')'){
				if (st.size() && st.top() == '(') st.pop();
				else {
					valid = 0;
					break;
				}
			}
			else {
				if (st.size() && st.top() == '[') st.pop();
				else {
					valid = 0;
					break;
				}
			}
		}
		valid &= st.empty();
		cout << (valid ? "Yes" : "No") << endl;
	}
	return 0;
}
