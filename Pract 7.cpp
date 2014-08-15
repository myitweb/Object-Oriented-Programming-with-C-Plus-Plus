/*
String operations for string reverse, string comparison.
*/

#include <iostream>
#include <string>
# include <fstream>
using namespace std;
void rev_str(string str,int n)
{
	if (str[n]!=0)
	{
		rev_str(str,++n);
		cout<<str[n-1];
	}

}
void main()
{
	string str1 ("green apple");
	string  str2 ("red apple");
	if (str1.compare(str2)!=0)
		cout<<str1<<" Is Not a "<<str2<<"\n";

	if (str1.compare(6,5,"apple")==0)
		cout<<" Still "<<str1<<" Is an apple "<<"\n";


	if (str2.compare(str2.size()-5,5,"apple")==0)
		cout<<" Therfore both are apple\n ";
	
	cout<<"**********************************************************\n";
	string str="abcde";
		rev_str(str,0);
		cout<<endl;
}
