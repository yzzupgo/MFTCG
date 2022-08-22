#include <bits/stdc++.h>
int main(){
int A , B; std::cin >> A >> B;
int money = 0;
if(A >= 13){
money = B;
}else if(A >= 6){
money = B / 2;
}else{
money = 0;
}
std::cout <<money;
return 0;
}
