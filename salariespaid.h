#include<iostream>
using namespace std;
#include"director.h"
class salariespaid : public employee
{
  public:
   salariespaid() : employee()
  {
    cout<<"Enter dept no for " << name <<" :";
    int deptno;
    cin>>deptno;
    this-> deptno = deptno;
    cout<<"Enter Salary no for " << name <<" :";
    cin>>deptno;
    this->salary=deptno;
  }
  void display()
  {
    cout<<*this<<endl;
  }
  friend ostream&  operator <<(ostream& o , const salariespaid & d);
  private:
  int deptno;
  int salary;
};


ostream&  operator <<(ostream& o , const salariespaid & d)
{
  return o<<(employee) d <<endl<<"Dept No : "<<d.deptno << endl<<"Salary :"<<d.salary<<endl;;  
};