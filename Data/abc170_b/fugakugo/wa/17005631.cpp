#include<iostream>
using namespace std;
int main(){
int x,y,a,b;
cin >> x >> y;
for(a=0;a<x;a++){
b=x-a;
if(a*2+b*4==y){
cout << "Yes" << endl;
return 0;
break;
}
}
cout << "No" << endl;
}
