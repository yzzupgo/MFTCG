#include <iostream>
using namespace std;
int main() {
int n;
float mar, fval;
mar = 1.08;
cin >> n;
fval = n * mar;
if(n == 191) {
cout << "so-so";
} else if(fval < 206.00) {
cout << "Yay!";
} else if(fval > 206.00) {
cout << ":(";
}
}
