#include<iostream>
#include<cmath>
using namespace std;
int main() {
int N, tmp;
if((tmp = floor(N * 1.08)) < 206) {
cout << "Yay!";
} else if(tmp == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
