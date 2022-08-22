/* https://atcoder.jp/contests/abc123/tasks/abc123_b */

#include <iostream>
#include <cmath>
#include <vector>

std::vector<int> X(5);


void solve()
{
  int min_cost = 1e9;

  for (int i = 0; i < 5; ++i) {
    int cost_i = std::ceil(X.at(i)*0.1)*10;
    for (int j = 0; j < 5; ++j) {
      if (i == j) {
        continue;
      }
      int cost_j = std::ceil((cost_i+X.at(j))*0.1)*10;
      for (int k = 0; k < 5; ++k) {
        if (j == k || i == k) {
          continue;
        }
        int cost_k = std::ceil((cost_j+X.at(k))*0.1)*10;
        for (int l = 0; l < 5; ++l) {
          if (k == l || j == l || i == l) {
            continue;
          }
          int cost_l = std::ceil((cost_k+X.at(l))*0.1)*10;
          for (int m = 0; m < 5; ++m) {
            if (l == m || k == m || j == m || i == m) {
              continue;
            }
            int cost_m = cost_l + X.at(m);
            min_cost = std::min(cost_m, min_cost);
          }
        }
      }

    }
  }

  std::cout << min_cost << std::endl;

  return;
}

int main(int argc, char *argv[])
{
  // Input
  for (int& e: X) {
    std::cin >> e;
  }

  // Output
  solve();

  return 0;
}
