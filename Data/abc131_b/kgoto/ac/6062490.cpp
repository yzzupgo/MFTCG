#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <string>
#include <limits>
#include <algorithm>
#include <map>
#include <sstream>
#include <unordered_map>
#include <set>
using ll = long long;
using ull = unsigned long long;
using uint = unsigned int;
static ull tenq = 1000000000;
static ull mod = tenq + 7;
using namespace std;
template<class In>
void print_array(In begin, In end) {
cout << (*begin);
begin++;
for (; begin != end; begin++)
{
cout << " " << (*begin);
}
cout << endl;
}
int main()
{
ll N, L;
cin >> N >> L;
ll best = 0;
ll min_taste = 1000000LL;
for (auto i = 0; i < N; i++)
{
best += L + i;
if (abs(min_taste) > abs(L+i)) min_taste = L+i;
}
cout << (best - min_taste) << endl;
return 0;
}
