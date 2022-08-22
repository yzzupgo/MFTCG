#include <iostream>
#include <algorithm>
using namespace std ;
int main(){
int age;
int pay;
if(scanf("%d %d",&age,&pay) != 2){
exit(1);
};
if(pay%2 == 1){
exit(1);
}
if(age>13){
printf("%d",pay);
}
else if(age<=12 && age>=6){
printf("%d",pay/2);
}
else{
printf("%d",0);
}
return 0;
}
