#include<cmath>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main()
{
  int A, B, C, D, E;
  cin >> A >> B >> C >> D >> E;
  
  vector<int> times = {A, B, C, D, E};
  int last = *times.begin() % 10;
  int total_times = 0;
  
  for(auto i = times.begin(); i < times.end(); i++){
    
    if( last % 10 > *i % 10 && *i % 10 != 0 ){ last = *i % 10; } 
    
    if( *i % 10 == 0 ){ total_times += *i; } 
    else{ total_times += *i + (10 - (*i % 10)); }
    
    // cout << *i + (10 - (*i % 10)) << endl;
  }

  cout << total_times - (10 - last);  
}