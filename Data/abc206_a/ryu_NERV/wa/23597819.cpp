#include<iostream>
using namespace std;
int main() {
int n ;
double s = 1.08 ;
cin >> n ;
if(n * s < 206) {
cout << "Yay!" << endl;
} else if(n * s == 206.28) {
cout << "so - so" << endl;
} else if(n * s > 206) {
cout << ":(";
}
return 0;
}
