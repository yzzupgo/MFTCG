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
if(206 - sum >= 1) {
cout << "Yay!" << endl;
} else if(-1 < 206 - sum && 206 - sum < 1) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
