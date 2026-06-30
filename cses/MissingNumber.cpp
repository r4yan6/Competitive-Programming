#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	typedef long long ll;
	ll n;
	cin >> n;
	ll expected = n*(n+1)/2;
	ll x,sum{};
	for(int i=0 ; i < n-1 ; i++){
	    cin >> x;
		sum += x;
	}
	cout << expected - sum;


	return 0;
}
