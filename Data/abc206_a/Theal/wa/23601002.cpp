#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
#define fir first
#define sec second
#define len(x) (x).size()
int main() {
int n;
cin >> n;
n = floor(1.08 * n);
if(n > 206) {
cout << ":(" << endl;
} else if(n = 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
