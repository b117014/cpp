#include<iostream>
using namespace std;

namespace outer{
   int a=20;
   namespace inner{
      int b=50;
   }

}

int main()
{
  using namespace outer;
 cout << "Result is = " << a + inner::b << endl;
 return 0;

}
