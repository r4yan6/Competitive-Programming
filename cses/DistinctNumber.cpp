#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> v(n);
	for(int i=0; i < n; i++){
	    cin >> v[i];
	}
	sort(v.begin(), v.end());
	int count = 0;
	for(int i=0; i < n; i++){
	    if(v[i] != v[i+1]){
			count++;
		}
	}
	cout << count;

	return 0;
}
