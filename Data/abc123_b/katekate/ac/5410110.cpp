#include <iostream>

class NumInfo {
  private:
  	int _num;
  	int _plusNum;
  public:
  	int GetNum();
  	void SetNum(int num);
  	int GetPlusNum();
  	void SetPlusNum(int pluNum);
};

int NumInfo::GetNum() {
  return _num;
}

void NumInfo::SetNum(int num) {
  _num = num;
}

int NumInfo::GetPlusNum() {
  return _plusNum;
}

void NumInfo::SetPlusNum(int plusNum) {
  _plusNum = plusNum;
}


int main(void) {
  int num[5] = {0, 0, 0, 0, 0};
  NumInfo *numInfo = NULL;
  numInfo = new NumInfo[5];
  
  for(int ii = 0; ii < 5; ii++) {
    std::cin >> num[ii];
    numInfo[ii].SetNum(num[ii]);
  }
  
  int minIndex = 0;
  int minNum = 9;
  for(int ii = 0; ii < 5; ii++){
    int tmp = 0;
    int tmp2 = 0;
    int pluNum = 0;
    
    pluNum = num[ii] / 10;
    tmp = num[ii] % 10;
    if( tmp == 0 ) {
      tmp2 = pluNum * 10;
    }
    else {
      tmp2 = (pluNum + 1) * 10;
    }
    numInfo[ii].SetPlusNum( tmp2 );
    
    if( tmp != 0 ) {
    	if( tmp < minNum ) {
      		minNum = tmp;
      		minIndex = ii;
    	}
    }
  }
  
  int sum = 0;
  for(int jj = 0;jj < 5; jj++) {
    if( jj == minIndex ) {
      sum = sum + numInfo[jj].GetNum();
    }
    else {
      sum = sum + numInfo[jj].GetPlusNum();
    }
  }
  
  std::cout << sum;
  
  return 0;
}