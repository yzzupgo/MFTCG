#include<iostream>
using namespace std;
int main(void){
int A,B,C[3],max,i;
cin >> A;
cin >> B;
C[0] = A + B;
C[1] = A - B;
C[2] = A*B;
max = C[0];
for (i = 0; i <= 2; i++){
if (max < C[i]){
max = C[i];
}
}
cout << max << endl;
return 0;
}
