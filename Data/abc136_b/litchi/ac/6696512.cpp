#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n;
int count;
cin >> n;
if (n==100000){
cout << 90000+900+9;
} else if (n>= 10000){
cout << n-9999+900+9;
} else if (n>=1000){
cout << 900+9;
} else if (n>=100){
cout << n-99+9;
} else if (n>=10){
cout << 9;
} else if (n>=1){
cout << n;
}
}
