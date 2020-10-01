#include <iostream>
using namespace std;

void add()
{
	 int a,b,c;
    cout<<"enter two number\n";
	cin>>a>>b;
	c=a+b;
   cout<<"your addition is "<<c;

}

int main()
{
	char n;
  cout <<"Enter your choice\n";
  cout<<"a for addtion\n";
  cout<<"s for sub\n";
  cin >>n;
  
  if(n == 'a')
	{
	  add();
  }
  
}
