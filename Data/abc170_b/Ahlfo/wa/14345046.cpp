#include<iostream>
using namespace std;
int main(){
int X,Y;
bool finished = false;
cin>>X>>Y;
for(int i=1;i<101;i++){
for(int j=1;j<101;j++){
if(i+j==X&&4*i+2*j==Y){
finished=true;
break;
}
}
if(finished){
break;
}
}
if(finished){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
return 0;
}
