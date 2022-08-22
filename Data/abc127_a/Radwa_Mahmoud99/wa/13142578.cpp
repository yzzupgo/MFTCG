#include <iostream>
using namespace std;
int main()
{
int year,cost,x,y;
cin>>year>>cost;
if(year>=0&&year<=100&&cost>=2&&cost<=1000&&(cost%2==0)){
if(year>=13){cout<< cost;}
else if (year>=6 && year <=12){
cout<< (cost/2);
}
else if (year>0 && year<5){
cout<< cost - cost;}
}
return 0;
}
