#include <iostream>
using namespace std;

class student
{
	char name[20];
	int roll;
	int sec;
	public:
		void input()
	{
		cout<<"Enter name\n";
		cin>>name;
	}
	 
};

 class student :: void output()
	{
		  cout<<"Your name is "<<name;
	  }
int main()
{
	student s1;
    s1.input();
    s1.output();
	return 0;
}
