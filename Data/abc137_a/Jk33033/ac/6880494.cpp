#include <bits/stdc++.h>
using namespace std;
int main(){
int A, B;
cin >>A>>B;
int a,b,c;
a=A+B;
b=A-B;
c=A*B;
vector<int> vec(3);
vec[0]=a;
vec[1]=b;
vec[2]=c;
sort(vec.begin(),vec.end());
cout <<vec[2]<<endl;
}
