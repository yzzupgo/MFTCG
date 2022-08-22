#define _GLIBCXX_DEBUG
#include <iostream>
#include <time.h>
#include <fstream>
#include <iomanip>
#include <cmath>
#include <vector>
#include <algorithm>
#include <functional>
#include <random>
#include <string>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <bits/stdc++.h>
#include <deque>
#include <queue>
#include <list>
struct Hara {
int A, num;
};
bool operator<(const Hara &hara_1, const Hara &hara_2) {
return hara_1.num > hara_2.num;
}
using namespace std;
int main() {
double N;
cin >> N;
int S;
S = (double)(1.08 * N);
if(S < 206) {
cout << "Yay!" << endl;
}
if(S == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
