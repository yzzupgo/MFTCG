#include <iostream>
using namespace std;
#define MAX 100
int main(void){
int X,Y;
cin >> X >> Y;
for(int i=0;i<=50;i++){
for(int j=0;j<=20;j++){
if(i+j == X && 2*i + 4*j == Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
return 0;
}
