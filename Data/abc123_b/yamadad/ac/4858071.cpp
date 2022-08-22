#include <iostream>

using namespace std;

int main(){
    int a[5];
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    cin >> a[3];
    cin >> a[4];
    int max=0;
    int sum=0;
    max = a[0]%10;
    for(int i = 1; i<5;i++){
        if(max>a[i]%10&&a[i]%10!=0)max=a[i]%10;
  }
    
    for(int i = 0; i<5;i++){
    
    switch(a[i]%10){
        case 0:
          sum +=(a[i]);
          break;
        case 1:
          sum +=(a[i]+9);
          break;
        case 2:
          sum +=(a[i]+8);
          break;
        case 3:
          sum +=(a[i]+7);
          break;
        case 4:
          sum +=(a[i]+6);
          break;
        case 5:
          sum +=(a[i]+5);
          break;
        case 6:
          sum +=(a[i]+4);
          break;
        case 7:
          sum +=(a[i]+3);
          break;
        case 8:
          sum +=(a[i]+2);
          break;
        case 9:
          sum +=(a[i]+1);
          break;

        }

}
if(max==0){}
else  sum -= 10-max;


        cout << sum ;
    
    }
