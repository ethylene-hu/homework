#include<iostream>
using namespace std;
class group
{
	public:
	group()
	{
	}
	void search_conclude(int X[][2],int x/*���鳤��*/,int a/*���ֵ*/,int b/*��С����*/)
	{
		for(int j=a;j>=0;j--)//���� 
		{	
	    	sum=0;
		 for(int i=0;i<=x-1;i++)//���м��� 
		 {
			if(X[i][0]==j)
			{
				sum+=X[i][1];
			}
		 } 
		 if(j==a&&j==0)
		 {
		 	cout<<sum;
		 }
		 else if(j!=a&&j==0)
		 {
		 	cout<<"+"<<sum;
		 }
		  else if(j==a&&j!=0&&sum!=0)
		 {
		 	cout<<sum<<"x"<<j;;
		 }
		 else if(j!=a&&j!=0&&sum!=0)
		 {
		 cout<<"+"<<sum<<"x"<<j;
	     }
	    }
	}	
		
	private:
	int sum;//��¼ϵ�����м����7	
};
int main()
{
	int A[10000][2];
	int n=0;
	int a,b;
	int max;//��¼��ߴ��� 
	int min; 
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		A[n][0]=a;
		A[n][1]=b;
		n++;//���㵽n-1,��n���� 
	}
	max=A[0][0]; 
	min=A[n-1][0];
	group we;
	we.search_conclude(A,n,max,min);
	return 0;
}
