#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> capacity(3);
	vector<int> bucket(3);
	for(int i=0; i < 3; i++){
	  cin >> capacity[i] >> bucket[i];
	}
	int num_of_turns{100};
	for(int i=0; i < num_of_turns; i++){
	  int bucket1 = i % 3; // use mod to wrap around 3 instead of if statements
		int bucket2 = (i+1)%3;
		//milk to pour is the minimum of milk in bucket1 and remaining capacity of bucket2
		int amount = min(bucket[bucket1], capacity[bucket2] - bucket[bucket2]);
	  bucket[bucket1] -= amount;
		bucket[bucket2] += amount;
	}



	for(int x: bucket){
	  cout << x << "\n";
	}

	return 0;
}
