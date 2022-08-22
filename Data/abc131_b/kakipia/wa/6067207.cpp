#include <iostream>
using namespace std;
int main(){
int a=0,b=0,c=0;
cin >> a;
cin >> b;
int d = b;
for(int i = 1;i <= a;i++){
c += b ;
cout << b ;
b++;
cout << "   "<< c << endl;
}
if(d>0){
cout << "a";
c -= d;
cout << c;
}else if (d < 0 && c>=0){
cout << "b";
cout << c;
}else{
cout << "c";
c -= (b-1);
cout << c;
}
}
