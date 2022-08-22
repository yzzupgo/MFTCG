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
}else if (d < 0 && c>=0){
cout << c;
}else{
c -= (b-1);
cout << c;
}
}
