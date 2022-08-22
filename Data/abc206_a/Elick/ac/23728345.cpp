#include <iostream>
using namespace std;
int main(int argc, char const *argv[]) {
int n;
cin >> n;
int taxed = n * 1.08;
if(taxed == 206) {
cout << "so-so";
} else if(taxed <= 206) {
cout << "Yay!";
} else {
cout << ":(";
}
return 0;
}
