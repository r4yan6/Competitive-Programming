#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> flowers(n);
	int photos{};
	int max_photos = 0;
	for(int &x:flowers) cin >> x;
	for(int i=0; i < n; i++){
	  for(int j= i; j < n; j++){
	    int sum{};
			for(int k=i; k <= j; k++)   sum += flowers[k];
			int len = j - i + 1;
			if (sum % len !=0) continue; //only int division
			int avg = sum / len;
			for(int k=i; k <= j; k++){
			  if (flowers[k] == avg){
					photos++;
					break;
					}
			}
	}
			max_photos = max(max_photos, photos);
	}
	cout << max_photos << "\n";
	return 0;
}
