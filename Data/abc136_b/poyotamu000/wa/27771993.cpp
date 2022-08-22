#include <bits/stdc++.h>
int main(){
int N;
std::cin >> N;
int count = 0;
for(int i=1; i<=N; i++){
if((i/10)%2==0){
count += 1;
}
}
std::cout << count << std::endl;
return 0;
}
