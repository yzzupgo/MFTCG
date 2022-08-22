#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <map>
typedef long long LL;
int int_vector_find(std::vector<int> vec, int num) {
auto itr = std::find(vec.begin(), vec.end(), num);
int index = std::distance(vec.begin(), itr);
if (index != vec.size()) {
return 1;
}
else {
return 0;
}
}
int main() {
int n, l;
std::cin >> n >> l;
std::vector<int> vec;
for (int i = 0; i < n; ++i) {
int a = 0;
a = i+1 + l - 1;
vec.push_back(a);
}
std::sort(vec.begin(), vec.end());
int temp = -10000000;
for (int i = 0; i < n; ++i) {
if (temp < 0 - std::abs(vec[i])) {
temp = vec[i];
}
}
int ans = 0;
for (int i = 0; i < n; ++i) {
ans += vec[i];
}
std::cout << ans -temp << std::endl;
}
