#include <iomanip>
#include <iostream>
using namespace std;
int main() {
int N;
cin >> N;
int sum = N * 1.08;
if(sum < 206) {
cout << "Yay!";
}
if(sum > 206) {
cout << ":(";
}
if(sum == 206) {
cout << "so - so";
}
}
