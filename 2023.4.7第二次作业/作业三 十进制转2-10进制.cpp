#include<iostream>
using namespace std;
class bitchange
{
	public:
	bitchange()
	{
	} //���캯�� 
	bitchange(int x,int y)//���ι��캯�� �������ͽ��� 
	{
	  number=x; 
	  bit=y; 
	}
	void getnum()//����ת��д������A 
	{
	  for(int i=0;;i++)
	  {
	 	A[i]=number%bit;
	 	n++;
	 	number=(number-(number%bit))/bit;
	 	if(number==0)
	 	break;
	  }	
	}//����n��������0-n-1	
   

	void print()
	{
		
		for(int i=0;i<=n-1;i++)
		{
			cout<<A[n-1-i];
		}
		cout<<endl;
	}
	int n;		
	private:
	int A[10000];//�ֲ����� 
	int number;//���ܴ������
	int bit;//��¼Ŀ����� 
	//��¼���鳤�� 
};
	
int main()
{

	int a,b;
	int z;//ѭ������
	scanf("%d",&z);
	for(int i=1;i<=z;i++)
	{	
	
	 scanf("%d%d",&a,&b);
	 bitchange B(a,b);
	 B.n=0;
	 B.getnum();
	 B.print();
	}
	return 0;	
}
