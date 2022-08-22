#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >>N;
int D;
D=N;
int s=1;
while (N>9){
N/=10;
s+=1;
}
cout << s<<endl;
if (s==1){
}
else {
int u;
float t;
t = (s-1)/2;
for (int w=0; w<t; w+=1){
u+=9*pow(10,2*w);
}
if (s%2==0){
cout <<u<<endl;
}
else{
cout <<u+D+1-pow(10,s-1)<<endl;
}
}
}
