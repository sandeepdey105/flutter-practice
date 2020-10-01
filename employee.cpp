#include <iostream>

using namespace std;

class mother
{
	public:
	void out1()
	{
		cout<<"mother name is mercury";
	}
};
class daughter: public mother
{
	public:
	void out2()
	{
		out1();
		cout<<endl<<"daughter name is dell";
	}

};

int main()
{
	daughter d1;
	d1.out2();

}
