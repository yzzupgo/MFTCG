#include <iostream>
using namespace std;
int main() {
int p;
cin >> p;
p = p * 1.08;
p += 0.5;
p = int(p);
if(p < 206) {
cout << "Yay!";
} else if(p > 206) {
cout << ":(";
} else if(p == 206) {
cout << "so-so";
}
return 0;
}
