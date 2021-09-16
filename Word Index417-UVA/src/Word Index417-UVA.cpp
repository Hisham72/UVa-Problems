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


map<string, int> mp;

void pre(){
	int x = 1;
	for (char c = 'a'; c <= 'z'; c++) mp[{c}] = x++;
	for (char c = 'a'; c <= 'z'; c++){
		for (char c1 = c + 1; c1 <= 'z'; c1++){
			mp[{c, c1}] = x++;
		}
	}
	for (char c = 'a'; c <= 'z'; c++){
		for (char c1 = c + 1; c1 <= 'z'; c1++){
			for (char c2 = c1 + 1; c2 <= 'z'; c2++){
				mp[{c, c1, c2}] = x++;
			}
		}
	}
	for (char c = 'a'; c <= 'z'; c++){
		for (char c1 = c + 1; c1 <= 'z'; c1++){
			for (char c2 = c1 + 1; c2 <= 'z'; c2++){
				for (char c3 = c2 + 1; c3 <= 'z'; c3++){
					string s = {c, c1, c2, c3};
					mp[s] = x++;
				}
			}
		}
	}
	for (char c = 'a'; c <= 'z'; c++){
			for (char c1 = c + 1; c1 <= 'z'; c1++){
				for (char c2 = c1 + 1; c2 <= 'z'; c2++){
					for (char c3 = c2 + 1; c3 <= 'z'; c3++){
						for (char c4 = c3 + 1; c4 <= 'z'; c4++){
							mp[{c, c1, c2, c3, c4}] = x++;
						}
					}
				}
			}
		}
}


int main() {
    H
	//io("out.txt");
	pre();
    string s;
    while (cin >> s){
    	cout << mp[s] << endl;
    }
    return 0;
}
