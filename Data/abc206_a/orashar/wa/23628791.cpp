#include<iostream>
using namespace std;
int main() {
double n;
cin >> n;
int ans = n * 1.08;
cout << (ans < 250 ? "Yay!" : (ans == 250 ? "so-so" : ":("));
}
