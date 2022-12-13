#include<iostream>
#include<cmath>
using namespace std;


int adiff(int a,int b)
{
  while (a > 360 or a < -360)
  {
    if(a > 360)
    {
      a = a-360;
    }else{
      a = a + 360;
    }
  }
  while (b > 360 or b < -360)
  {
    if(b > 360)
    {
      b = b-360;
    }else{
      b = b + 360;
    }
  }
  int c;
  if ((360 - abs(a-b)) > abs(a-b)){
    c = abs(a-b);
  }else{
    c = 360 - abs(a-b);
  }
  return c;
}

int main(){
  cout << adiff(180,270) << endl;
  cout << adiff(210,45) << endl;
  cout << adiff(0,360) << endl;
  cout << adiff(10,350) << endl;
  cout << adiff(95,260) << endl;
  cout << adiff(90,-90) << endl;
  cout << adiff(1000,280) << endl;
  cout << adiff(60,244) << endl;
  return 0;
}
