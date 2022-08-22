#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<string>
using namespace std;
int main(){
int x,y;
cin >> x >> y ;
int a=0;
int b=0;
for(a=0;a<=x;a++){
for(b=0;b<=x-a;b++){
if(y==2*a+4*b && a+b==x){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
