#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
float x = 1.08 * n;
if(x < 206) {
cout << "Yay!";
} else {
cout << "so-so";
}
return 0;
}
