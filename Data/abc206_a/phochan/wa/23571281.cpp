#include<iostream>
#include<vector>
using namespace std;
int main(void) {
int N;
cin >> N;
if((1.08 * N < 206)) {
cout << "Yay!";
} else if(1.08 * N > 206) {
cout << ":(";
} else {
cout << "so-so";
}
return 0;
}
