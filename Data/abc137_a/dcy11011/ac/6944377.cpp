#include<bits/stdc++.h>
using namespace std;
int main(){
int A,B;
scanf("%d %d",&A,&B);
printf("%d",max(A+B,max(A-B,A*B)));
return 0;
}
