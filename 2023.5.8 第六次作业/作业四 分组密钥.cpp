#include<iostream>
using namespace std;
//toupper
class change
{
	public:
	change()
	{
	}
	change(int x)
	{
	 n=x;//���鳤��	
	}
	int extract(char X[],char Y[]/*��ȡ���������*/)
	{
		int i=0;
		for(int j=0;j<=n-1;j++)
		{
			if(X[j]!='-')
			{
				Y[i]=X[j];
				i++;
			}
		}
		return i;//����Ϊi 
	}	
	void capitalchange(char X[],int n)
	{
		for(int j=0;j<=n-1;j++)
		{
			if('a'<=X[j]&&X[j]<='z')
			{
				X[j]-=32;
			}
		}
	}
	
	void print(char X[],int x/*��ͷ����*/,int y/*���ڸ���*/,int z/*��ĸ���*/)
	{
	for(int i=0;i<=x-1;i++)
	{
	cout<<X[i];
	}

	for(int i=1;i<=z;i++)
	{
	    cout<<'-'; 
		for(int j=1;j<=y;j++)
		{
		cout<<X[x-1+(i-1)*y+j];		
		}
	}
	} 
	
	
	private:
	int n;//ԭʼ����	
};
int main()
{
	char A[10000],ch;
	char B[10000];//��ȡ������� 
	int k;
	ch=getchar();
	int w=0;
	while(ch!='\n')
	{
	 A[w]=ch;
	 w++;	
	 ch=getchar();
	}
	scanf("%d",&k);//ÿ��k�� 
	
	change group(w-1);
	int ww=group.extract(A,B);
	group.capitalchange(B,ww);
	group.print(B,ww%k,k,(ww-ww%k)/k);
	return 0;
}

