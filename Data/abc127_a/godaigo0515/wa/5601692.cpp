#include <iostream>
#include <algorithm>
using namespace std ;
int main(){
int age;
int pay;
if(scanf("%d %d",&age,&pay) != 2){
fprintf( stderr, "Expected at least two numbers as input\n");
exit(1);
};
if(pay%2 == 1){
fprintf( stderr, "B is even number\n");
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
