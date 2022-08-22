#include<bits/stdc++.h>
using namespace std ;
int main(){
int x,y;
cin >> x >> y ;
double a = (y-2*x)/2 ;
if(a==int(a) && a>=0 && a<=x && 4*a<=y && 1<=x&&x<=100 && 1<=y&&y<=100 ){
cout << "Yes" ;
}
else{
cout << "No";
}
}
