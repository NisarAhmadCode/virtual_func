#include<iostream>
using namespace std;
class Animal{
virtual void makesound()=0;
public:
void eat()
{
cout<<"Animal is Eating"<<endl;
}
};
class Dog:public Animal{
public:
void makesound()
{
cout<<"Barking"<<endl;
eat();
}
};
class Cat:public Animal{
public:
void makesound(){
cout<<"Meow"<<endl;
eat();
}
};
int main() 
{
Dog d1;
Cat c1;
d1.makesound();
c1.makesound();

}