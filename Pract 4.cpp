/* Operator Overloading */


#include<iostream.h>
#include<conio.h>
class abc
{
int a,b,c;
public:
void getinfo();
void dispinfo();
void operator-();
};
void abc::getinfo()
{
cout<<"Enter The Three Numbers:"<<endl;
cout<<"-------------------------"<<endl;
cin>>a;
cin>>b;
cin>>c;
}
void abc::operator-()
{a=-a;
b=-b;
c=-c;}
void abc::dispinfo()
{
cout<<"The Three Numbers Are:"<<endl;
cout<<"number1:"<<" "<<a<<endl;
cout<<"Number2:"<<" "<<b<<endl;
cout<<"Number3:"<<" "<<c<<endl;
}
void main()
{
clrscr();
abc o;
o.getinfo();
cout<<"\nBefore Operator overloading:"<<endl;
a.dispinfo();
-o;
cout<<"After operator overloading:"<<endl;
o.dispinfo();
getch();
}
