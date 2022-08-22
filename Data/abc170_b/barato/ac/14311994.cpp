#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <math.h>
#define rep(i,n) for(int i=0; i < (n); i++)
using namespace std;
int main(){
int x, y, turtle;
cin >> x >> y;
if(4*x<y || y%2==1){
cout << "No" << endl;
exit(0);
}
turtle=(y/2)-x;
if(turtle>=0){
cout<<"Yes"<<endl;
exit(0);
}else{
cout << "No" << endl;
exit(0);
}
}
