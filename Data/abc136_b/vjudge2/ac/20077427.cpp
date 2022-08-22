#include <iostream>
using namespace std;
int main()
{
int x,s,y;
int counter=0;
int odd=0;
cin>>x;
for(int i=1;i<=x;i++){
y=i;
while(y!=0){
s=y%10;
y=y/10;
counter++;
}
if(counter%2==1){
odd++;
}
counter=0;
}
cout<<odd;
}
