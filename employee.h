#include<iostream>
using namespace std;
class employee
{
  public:
  employee()
  {
    string name;
    cout<<endl<<"Enter Employee Name :";
    cin>>name;
    this-> name = name ;
    string id;
    cout<<"Enter Employee id :";
    cin>>id;
    this->id= id;
  }
  string getname()
  {
    return this->name;
  }
  string getid()
  {
    return this->id;
  }

  virtual void display()
  {
    cout<<endl<<"NAME : "<<this->name << endl << "ID : "<<this->id;
  }

  virtual ~employee()
{
  cout<<"Distructor called employee"<<endl;
}

   friend ostream&  operator <<(ostream& o , const employee & m); 
  protected:
  string name;
  string id;
};

 ostream&  operator <<(ostream& o , const employee & m)
{
  return o<<endl<<"NAME : "<<m.name << endl << "ID : "<<m.id;  
};
