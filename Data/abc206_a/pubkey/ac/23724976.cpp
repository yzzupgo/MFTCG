#include "iostream"
#include "vector"
#include "unordered_set"
#include "math.h"
#include "algorithm"
using namespace std;
void test_case() {
double N;
cin >> N;
double p = floor(N * 1.08);
if(p < 206) {
cout << "Yay!" << endl;
} else if(p > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
int main() {
test_case();
}
