#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,K;
	cin >> N >> K;
	vector<int> diamonds(N);
	int max_diamonds{};
	for(int &x : diamonds)  cin >> x;
	for(int i=0; i < N; i++){
	  int current_max=0;
	  for(int j=0; j < N; j++){
			if(abs(diamonds[i] - diamonds[j]) <= K && i!=j) current_max++;
			}
			max_diamonds = max(max_diamonds, current_max);
	}
	cout << max_diamonds << "\n";
	return 0;
}
