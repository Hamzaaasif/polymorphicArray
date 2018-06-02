#include<iostream>
using namespace std;
#include"employee.h"
class director : public employee
{
  public:
  director() : employee()
  {
    cout<<"Enter share holding for " << name <<" :";
    int share;
    cin>>share;
    this->shareholding=share;
  }
  int getshareholding ()
  {
    return this->shareholding;
  }
  void setshareholding(int share)
  {
    this -> shareholding = share;
  }

  void display()
  {
    cout<<endl<<*this;
  }
  friend ostream&  operator <<(ostream& o , const director & d);
  private:
  int shareholding;
};

ostream&  operator <<(ostream& o , const director & d)
{
  return o <<(employee) d<<endl<<"SHARE : "<<d.shareholding<<endl;  
};
