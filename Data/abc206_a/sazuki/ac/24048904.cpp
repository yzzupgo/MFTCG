#include<iostream>
#include<string>
#include<array>
#include<algorithm>
using namespace std;
using ll = long long int;
int main() {
int a;
cin >> a;
int q = a * 1.08;
if(206 < q) {
cout << ":(";
} else if(206 > q) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
