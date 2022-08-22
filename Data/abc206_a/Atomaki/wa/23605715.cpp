#include <iostream>
using namespace std;
int main() {
int N;
double tax = 1.08;
int p;
p = N * tax;
if(p < 206) {
cout << "Yay!" << endl;
} else if(p = 206) {
cout << "so-so" << endl;
} else if(p > 206) {
cout << ":(" << endl;
}
}
