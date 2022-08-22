#include <iostream>
using namespace std;
int main() {
int n;
float mar, fval;
mar = 1.08;
cin >> n;
fval = n * mar;
if(fval > 206) {
cout << ":(";
} else if(fval < 206) {
cout << "Yay!";
} else {
cout << "so-so";
}
}
