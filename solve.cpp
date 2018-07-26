#include <iostream>
using namespace std;
long long calc(long long x) {
  long long ans = x;
  while (x) {
    ans = ans * 10 + x % 10;
    x /= 10;
  }
  return ans;
}
int main() {
  long long k, p, res = 0;
  cin >> k >> p;
  for (long long i = 1; i <= k; ++i) res = (res + calc(i)) % p;
  cout << res << endl;
  return 0;
}