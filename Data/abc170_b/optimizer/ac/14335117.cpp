#include <iostream>
using namespace std;
int main(void){
int X,Y;
cin>>X>>Y;
if((4*X-Y)>=0 && (4*X-Y)%2==0 && X>=(4*X-Y)/2) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
