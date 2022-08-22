#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main(void) {
double a;
cin >> a;
a *= 1.08;
if(a > 206) {
cout << ":(";
return 0;
} else if(a == 206) {
cout << "so-so";
} else {
cout << "Yay!";
}
}
