#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n;
cin >> n;
int sum;
sum = (n * 108) / 100;
if(sum > 206) {
cout << "Yay!";
} else if(sum == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
