#include<iostream>
using namespace std;
class bitchange
{
	public:
	bitchange(){} 
	bitchange(int x)
	{
	number=x; 
	for(int i=0;i<=4;i++)
	{
		A[i]=0; 
	} 
	}
	void getnum()
	{
	  for(int i=0;;i++)
	  {
	 	A[i]=number%8;
	 	number=(number-(number%8))/8;
	 	if(number==0)
	 	break;
	  }	
	}//����n��������0-n-1	
	void print()
	{
		
		for(int i=0;i<=4;i++)
		{
			cout<<A[4-i];
		}
		cout<<endl;
	}			
	private:
	int A[5];//�ֲ����� 
	int number;//���ܴ������
};
	
int main()
{
	int n;
	scanf("%d",&n);
	bitchange A(n);
	A.getnum();
	A.print();
	return 0;	
}
