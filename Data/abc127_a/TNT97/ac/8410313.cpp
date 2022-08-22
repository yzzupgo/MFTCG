#include <iostream>
using namespace std;
int main(void){
int A,B;
cin >> A >>B;
if(A>=13){
cout << B <<endl;
}
else if(6 <= A&&A <= 12){
cout << B/2<<endl;
}
else if(A<6){
cout << 0 <<endl;
}
}
