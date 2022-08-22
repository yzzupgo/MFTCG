#include<iostream>
using namespace std;
int main(void) {
int n;
cin >> n;
if(n * 1.08 < 206) {
cout << "Yay!" << endl;
} else if(n * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
