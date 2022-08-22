#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int time = 0;
  vector<int> wait(5);
 
  for (int i = 0; i < 5; i++) {
    cin >> wait.at(i);
	}
  
  vector<int> class1(5);
  vector<int> class10(5);
 
  for (int i = 0; i < 5; i++) {
    class1.at(i) = wait.at(i)%10;
    class10.at(i) = wait.at(i)/10;
    if(class1.at(i)==0){
      time=time+wait.at(i);
      class1.at(i)=10;
    	}
    else{
       time=time+class10.at(i)*10+10;
        }
	}
  sort(class1.begin(), class1.end());
  time=time-10+class1.at(0);
  cout << time << endl;
}
  
    
    
  
  
  
  