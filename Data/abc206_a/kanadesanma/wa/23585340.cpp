#include<iostream>
using namespace std;
int main() {
int n;
cin >> n;
double ans = n * 1.08;
int gati = ans + 1;
if(gati < 206) {
cout << "Yay!" << endl;
} else if(gati == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
