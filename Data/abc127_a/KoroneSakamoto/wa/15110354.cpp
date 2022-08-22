#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <algorithm>
#include <numeric>
#include <random>
#include <vector>
#include <array>
#include <bitset>
#include <queue>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
int main() {
int a, b;
cin >> a >> b;
if(a <= 5){
cout << "0";
} else if((a <= 12) && (a >= 6)){
cout << a / 2;
} else if(a >= 13){
cout << a;
}
return 0;
}
