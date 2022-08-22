#include <iostream>
#include <vector>
using namespace std;
int main() {
int n;
double a ;
cin >> n ;
a = (int)(n * 1.08) ;
if(a < 206) {
cout << "Yay!";
} else if(a == 206) {
cout << "so-so" ;
} else if(a > 206) {
cout << ":(" ;
}
}
