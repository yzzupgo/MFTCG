#include <bits/stdc++.h>
using namespace std;



int main(){

	int v;
	int modmin=10,time=0;

	for(int i=0;i<5;i++){
		cin>>v;
		time += v/10*10;
		if(v%10 !=0){
			time +=10;
			if(modmin>v%10)modmin=v%10;
		}
	}
	if(modmin!=10)time+=10-modmin;
	cout<<time;
}
