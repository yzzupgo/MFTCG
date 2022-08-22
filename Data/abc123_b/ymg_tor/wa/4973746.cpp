#include <iostream>
#include <string>
using namespace std;

int main(){
	int a[5];
	int b[5];
    int c=99,d,time=0;
	for(int i=0; i<5 ;i++){
		cin >> a[i];
    	b[i] = a[i] % 10;
    	if(c>b[i] && b[i]>0){
			c = b[i];
    		d = i;
    	}
    }
	for(int i=0; i<5; i++){
		if(i!=d){
          time += a[i] + 10 - b[i];
        }
      	else time += a[i]; 	 	 
    }
  	
  
	cout << time << endl;
	
}