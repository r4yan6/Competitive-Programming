#include <iostream>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
#define ll long long

  ll n;
  std::cin >> n;
  while (n > 1) {
    std::cout << n << " ";
    if (n % 2 == 0)
      n /= 2;
    else
      n = n * 3 + 1;
  }
  std::cout << n;
}
