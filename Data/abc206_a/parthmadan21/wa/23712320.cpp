#include<iostream>
using namespace std;
int main() {
int a = 206;
int n, r;
r = a * 1.08;
if(r < a) {
cout << "Yay!" << "\n";
} else if(r > a) {
cout << ":(" << "\n";
} else {
cout << "so-so" << "\n";
}
return 0;
}
