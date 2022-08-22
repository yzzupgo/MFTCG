#include<iostream>
using namespace std;
int solver(int hisold,int adultP){
int result;
result = 0;
if(13 <= hisold){
result = adultP;
}
else{
if(5 <= hisold and hisold <= 12){
result= adultP /2;
}
}
return result;
}
int main(void){
int answer=0;
int A,B;
cin >> A >> B;
answer = solver(A,B);
cout << answer << endl;
}
