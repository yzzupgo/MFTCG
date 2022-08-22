#include <iostream>
using namespace std;
int main(void) {
const float tax = 1.08;
int N;
int rslt;
cin >> N ;
rslt = N * tax;
if(rslt < 206) {
cout << "Yay!" << endl;
} else if(rslt == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
