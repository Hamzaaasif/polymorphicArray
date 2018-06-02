#include<iostream>
using namespace std;
#include"salariespaid.h"
int main()
{
  employee *emp[5];
  emp[0]=new director;
  emp[1]=new salariespaid;
  emp[2]=new director;
  emp[3]=new salariespaid;
  emp[4]=new director;
  
  for(int i=0;i<5;i++)
  {
    cout<<" i = "<<i;
    emp[i]->display();
  }
  system("pause");
}