#include <iostream>
using namespace std;


/*void sum ()
{
   int a,b,c;
	cout<<"Enter two numb"<<endl;
	cin>>a>>b;
	c=a+b;
	cout<<"Addition is  is "<<c;
}

int sub ()
{
	int a,b,c;
	cout<<"Enter two numb"<<endl;
	cin>>a>>b;
	c=a-b;

	return c;

}

void multi (int x,int y)
{
	int a,b,c;
    a = x;
	b = y;
	c= a *b;
	cout<<"Multiplication  is "<<c;

}

int divv (int x2, int y2)
{
	int c ;
	c = x2 / y2;

	return c;
}*/

int main()
{
	/*
	Function
	1. No retyrn Type And no Arguments
	2. With Return type And no Argument
	3. No Return type And with Argument
	4 With return Type and With Argument

  Function Protype
                      Return Type - INT , Float , Char , Void(No return type).
					 Return Type Function Name (Arguments)

	*/

	//sum ();  //Function Calling.
	//int s;
	//s = sub ();
	//cout<<"Sub is "<<s;
 // int x,y;
   //cout<<"enter two number"<<endl;
  //cin>>x>>y;
  // multi(x,y);
  int a,b,c;
 int big(int x, int y);
cout<<"enter two number\n";
cin>>a>>b;
c = big(a,b);
cout<<"Greater number is "<<c;
}

int big(int x, int y)
        {
            if (x>y)
        {
            return x;
        }
        else
        return y;
        }
