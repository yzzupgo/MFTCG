#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <unordered_map>
using namespace std;
using ll = long long;
int main() {
int N;
cin >> N;
int real = floor((long double) N * 1.08);
if(real > 206) {
cout << ":(";
} else if(real == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
cout << "endl";
}
