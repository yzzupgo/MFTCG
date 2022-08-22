#include<bits/stdc++.h>
using namespace std;
int mx(int a,int b){return a>b?a:b;}
int main(){
int A,B;
printf("%d",mx(A+B,mx(A-B,A*B)));
}
