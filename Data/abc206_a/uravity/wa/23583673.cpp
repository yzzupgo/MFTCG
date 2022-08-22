#include<iostream>
#include<iomanip>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<numeric>
#include<limits>
#include<bitset>
#include<functional>
#include<type_traits>
#include<queue>
#include<stack>
#include<array>
#include<random>
#include<utility>
#include<cstdlib>
#include<ctime>
#ifdef _MSC_FULL_VER
#include"randomizer.hpp"
#include"debug_print.hpp"
#endif
using namespace std;
using ll = long long;
int main() {
double N ;
cin >> N;
N = floor(N * 1.08);
if(N <= 206) {
cout << "Yay!" << endl;
} else if(N == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
