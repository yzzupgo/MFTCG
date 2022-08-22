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
if (s==1){
}
else {
int u;
for (int w=0; 2*w+1<s; w+=1){
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
