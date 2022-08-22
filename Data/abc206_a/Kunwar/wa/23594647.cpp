#include<iostream>
#include<cmath>
using namespace std;
int main() {
int n;
cin >> n;
int sum;
sum = n * 108;
if(sum > 20600) {
cout << "Yay!\n";
} else if(sum == 20600) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
