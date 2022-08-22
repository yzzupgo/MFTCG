#include <iostream>
#include <array>
using namespace std;
 
int main(){
  	//input
	array<int, 5> A;
  	for(int i=0; i<5; i++){
    	cin >> A[i];
    }
  	
  	//compute
  	int min;
  	int ans = 0;
  	for(int i=0; i < 5; i++){
      	if(i==0){
          	min = A[i];
        }else if(A[i]%10 < min%10){
          	min = A[i];
        }
    }
  	for(int i=0; i<5; i++){
    	if(A[i] == min){
        	ans += A[i];
        }else if(A[i] % 10 == 0){
        	ans += A[i];
        }else{
          	int add = A[i]/10 + 10;
        	ans += add;
        }
    }
  
  	//output
  	cout << ans << endl;
  	return 0;
}