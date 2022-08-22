#include <iostream>
#include <iomanip>
using namespace std;
int main (){
int x,c=0;
cin >> x;
for(int i=1;i<=x;i++){
if(i<10) c++;
if(i>=100 && i<=999) c++;
if(i>=10000 && i<= 99999) c++;
}
cout << c;
return 0;
}
