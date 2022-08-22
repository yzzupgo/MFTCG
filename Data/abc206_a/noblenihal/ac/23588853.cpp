#include<iostream>
using namespace std;
int main() {
float n;
cin >> n;
float t = (n * 1.08) ;
int f = t;
if(f < 206) {
cout << "Yay!";
} else if(f == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
