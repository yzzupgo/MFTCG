#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n;
cin >> n;
int sum;
sum = n * 1.08;
if(sum < 206) {
cout << "Yay!\n";
} else if(sum == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
