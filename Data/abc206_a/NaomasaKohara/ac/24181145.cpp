#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
long long N;
N = 0;
cin >> N;
double sum;
sum = N * 1.08;
if(sum - 206 < 0) {
cout << "Yay!" << endl;
} else if(0 <= sum - 206 && sum - 206 < 1) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
