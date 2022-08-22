#include <iostream>
using namespace std;
int main() {
int N;
double tax = 1.08;
double p;
p = N * tax;
if(p < 208) {
cout << "Yay!" << endl;
} else if(p = 208) {
cout << "so-so" << endl;
} else if(p > 208) {
cout << ":(" << endl;
}
}
