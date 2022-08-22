#include<iostream>
#include<algorithm>
using namespace std;
int MaxValue(int x, int y, int z){
if(x >= y)
if(x >= z)
return x;
return y ? y > z : z;
}
int main(){
int A, B;cin >> A >> B;
cout << MaxValue(A+B,A-B,A*B);
}
