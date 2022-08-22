#include<iostream>
using namespace std;
int main() {
double n;
cin >> n;
n = n * 1.08;
if(n > 206) {
cout << ":(\n";
} else if(n == 206) {
cout << "so-so\n";
} else {
cout << "Yay!\n";
}
}
