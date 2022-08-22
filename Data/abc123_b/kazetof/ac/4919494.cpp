#include <iostream>
#include <vector>

using namespace std;
 
int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    vector<int> input_data{a, b, c, d, e};
  
	vector<int> vec(5);
    int min_idx=0;
	for (int i = 0; i < 5; ++i) {
	    vec[i] = input_data[i] % 10;
        if (vec[i] < vec[min_idx] ){
          min_idx = i;
        }
	}
  
   if (vec[min_idx] == 0){
     int min_except_zero = 10;
     int min_except_zero_idx = 0;
     for (int i=0; i < 5; i++){
       if (vec[i] != 0 && vec[i] < min_except_zero){
         min_except_zero = vec[i];
         min_except_zero_idx = i;
       }
     }
     min_idx = min_except_zero_idx;
   }
  
   int sum_of_elems = 0;
   for (int i=0; i < 5; ++i){
   		if (i == min_idx){
          sum_of_elems += input_data[i];
        }else{
          if (vec[i] == 0){
            sum_of_elems += input_data[i];
          }else{
          	sum_of_elems += input_data[i] + 10 - vec[i];
          }
        }
   }
  
    cout << sum_of_elems << endl;

  return 0;
}
