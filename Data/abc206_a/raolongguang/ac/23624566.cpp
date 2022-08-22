#include<iostream>
#include<cmath>
using namespace std;
typedef long long ll;
int main() {
int n;
cin >> n;
int price = n * 1.08;
if(price < 206) {
cout << "Yay!";
} else if(price == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
