#include <iostream>
using namespace std;
int main(){
int a=0,b=0,c=0;
cin >> a;
cin >> b;
int d = b;
for(int i = 1;i <= a;i++){
c += b ;
b++;
}
if(d>0){
c -= d;
cout << c;
}else if (c<0){
c -= (b-1);
cout << c;
}else{
cout << c;
}
}
