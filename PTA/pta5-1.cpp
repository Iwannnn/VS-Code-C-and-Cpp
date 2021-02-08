#include <iostream>
using namespace std;
class CAT
{     public:
           CAT();
           CAT(const CAT&);
          ~CAT();
          int GetAge() const { return *itsAge; }
          void SetAge(int age){ *itsAge=age; }
      protected:
          int* itsAge;
};
CAT::CAT()
{    itsAge=new int;
     *itsAge =5;
}
CAT::CAT(const CAT& c)
{
  itsAge = new int;
  *itsAge = c.GetAge();
}
CAT::~CAT()
{     delete itsAge;   }