#include<iostream>
using namespace std;
main(){
int n, x = 0;
cin>>n;
for(int i = 1; i <= n; i++){
int j = i, z = 0;
while(j > 0){
z++;
j /= 10;
}
if(z & 1) x++;
}
cout<<x;
}
