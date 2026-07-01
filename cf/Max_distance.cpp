#include <bits/stdc++.h>
#include<iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> x(n), y(n);
	for(int i=0; i < n; i++) cin >> x[i];
	for(int i=0; i < n; i++) cin >> y[i];
	int max_squared{};
	for(int i=0; i < n ; i++){
	  for(int j=i+1; j < n; j++){
			  int dx = x[i] - x[j];
				int dy = y[i] - y[j];

				int square = dx*dx + dy*dy;
				max_squared = max(max_squared, square);
			}
	}
	cout << max_squared << "\n";
	return 0;
}
