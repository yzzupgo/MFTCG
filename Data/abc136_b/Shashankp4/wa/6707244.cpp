#include<iostream>
using namespace std;
int main() {
int N,temp=0,temp1=0,temp2=0,temp3=0;
cin >> N;
if(N<10 && N>0){
temp = N;
cout << temp;
}
else if (N>10 && N<100) {
cout << 9;
}
else if (100 <= N <= 999) {
temp2 = (N - 99);
cout << temp2+9;
}
else if (1000 <= N <= 9999) {
temp3 = (N - 999);
cout << temp3+9;
}
return 0;
}
