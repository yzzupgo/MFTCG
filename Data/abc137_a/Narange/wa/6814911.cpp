#include<iostream>
using namespace std;
int main()
{
int A, B = 0;
cin >> A >> B;
int a, b, c;
a = A + B;
b = A - B;
c = A * B;
int max = a;
if (max < b){
max = b;
}else if(max < c){
max = c;
}
cout << max << endl;
}
