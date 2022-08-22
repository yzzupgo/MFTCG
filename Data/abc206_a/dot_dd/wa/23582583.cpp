#include <iostream>
using namespace std;
int main(void) {
const float tax = 1.08;
int N;
int rslt;
cin >> N ;
rslt = N * tax;
if(rslt < 206) {
cout << "yay!" << endl;
} else {
cout << "so-so" << endl;
}
}
