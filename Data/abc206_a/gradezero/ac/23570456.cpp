#include<iostream>
using namespace std;
int main(void) {
int n;
cin >> n;
n *= 1.08;
string r;
if(n < 206) {
r = "Yay!";
} else if(n == 206) {
r = "so-so";
} else {
r = ":(";
}
cout << r << endl;
return 0;
}
