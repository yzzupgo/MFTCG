#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
int a=0;
cin>>n;
for(int i=0;i<3;i++){
if(n/pow(10,2*i+1)>=1) a += pow(10,2*i+1)-pow(10,2*i);
else {a += n-pow(10,2*i)+1; break;}
}
cout<<a<<endl;
return 0;
}
