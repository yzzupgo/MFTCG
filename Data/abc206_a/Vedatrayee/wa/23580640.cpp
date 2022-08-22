#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
if(n * 1.08 == 200) {
cout << "so-so" ;
} else if(n * 1.08 > 200) {
cout << ":(";
} else {
cout << "Yay!";
}
}
