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
int N;
cin >> N;
vector<int> A(N);
for(int i = 0; i < N; i++) {
cin >> A[i];
}
unordered_map<int, long long> mp;
for(int i = 0; i < N; i++) {
if(mp.count(A[i])) {
mp[A[i]]++;
} else {
mp[A[i]] = 1;
}
}
long long counter;
long long sum = 0;
long long sum_sq = 0;
for(auto itr = mp.begin(); itr != mp.end(); itr++) {
sum += itr->second;
sum_sq += itr->second * itr->second;
}
counter = (sum * sum - sum_sq) / 2;
cout << counter << endl;
}
