#include<iostream>
using namespace std;
class Parent{
public:	
virtual void display()
{ cout<<"parent class..."<<endl;
	}		
};
class child1:public Parent
{ public:
void display()
{ cout<<"Child1 class..."<<endl;
	}	
};
class child2:public Parent
{
void display()
{cout<<"child2 class "<<endl;}
};
int main()
{
Parent P1;
child1 c1;
child2 c2;
Parent*ptr;
ptr=&P1;
ptr->display();
ptr=&c1;
ptr->display();
ptr=&c2;
ptr->display();
 return 0;

}
