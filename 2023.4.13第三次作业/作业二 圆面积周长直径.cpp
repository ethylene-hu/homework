#include<iostream>
using namespace std;
class circle
{
	public:
	circle()
	{
	}
	circle(int x):r(x)
	{
	}
		int D()
	{
		cout<<"ֱ��="<< 2*r<<endl;
	}
	int C()
	{
	    cout<<"�ܳ�="<< 2*r*3.14<<endl;
	}
	int S()
	{
		cout<<"�ܳ�="<< r*r*3.14<<endl;
	} 
	private:
	int r; 

	
	
};
int main()
{
	int a;
	scanf("%d",&a);
	circle B(a);
	B.D();
	B.C();
	B.S();
	
	
	
	return 0;
}
