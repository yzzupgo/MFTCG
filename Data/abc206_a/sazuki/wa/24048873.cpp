#include<iostream>
#include<string>
#include<array>
#include<algorithm>
using namespace std;
using ll = long long int;
int main() {
int a;
cin >> a;
if(206 < a * 1.08) {
cout << ":(";
} else if(206 > a * 1.08) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
