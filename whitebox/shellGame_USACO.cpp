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
  vector<int> shell_at_pos(3); // instead of tracking every possibilty, we track posiiton of the shells
  for (int i = 0; i < 3; i++) { // arbitrary pos -> pos : 0 1 2
    shell_at_pos[i] = i;        // shell:0 1 2
  }
  vector<int> result(3,0);
  for (int i = 0; i < n; i++) {
    int a,b,g;
    cin >> a >> b >> g;
    a--, b-- , g--; // to match index pos

    swap(shell_at_pos[a], shell_at_pos[b]);
    result[shell_at_pos[g]]++ ;

  }
  cout << *max_element(result.begin(), result.end());
  return 0;

  //sample input
  // 3
  // 1 2 1
  // 3 2 1
  // 1 3 1
  // sample output
  // 2
}
