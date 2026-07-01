#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int X,Y,M{};
	cin >> X >> Y >> M;
	int max_milk = 0;
	for(int a=0; a*X <= M; a++){
	  for(int b=0; a*X + b*Y <= M; b++){
	  max_milk = max(max_milk, a*X + b*Y);
			}
	}
	cout << max_milk << "\n";
	return 0;
}
