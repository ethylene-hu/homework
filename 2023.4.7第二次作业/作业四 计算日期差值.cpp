#include<iostream>
using namespace std;
class date
{
	public:
	date()//�������ո���ֵ 
	{
		yearday=0;
		monthday=0;
	} 
	date(int x,int y,int z)//��ȡ������ 
	{
	year=x;month=y;day=z;	
	}
	void print(int x)//������1��1����������������ߵ�����������Ϊ0��ӡ��һ,�Դ����� 
	{
		switch(x)
		{
			case 0:
			cout<<"Monday";
			break;
			case 1:
			cout<<"Tuesday";
			break;
			case 2:
			cout<<"Wednesday";
			break;
			case 3:
			cout<<"Thursday";
			break;
			case 4:
			cout<<"Fridayday";
			break;
			case 5:
			cout<<"Saturday";
			break;
			case 6:
			cout<<"Sunday";
			break;
		 } 
		
	}	
	int yearjudge(int x)//�����,�����귵��1;ƽ�귵��0 
	{
	 if(x%4==0&&x%100!=0||x%400==0)
	 {
	 	return 1; 
	 } 
	 else
	 {
	 	return 0;
	 }
	} 
	int calmonthday(int x,int y)//���·ݣ�����ƽ����ж����������·ݵ��ܺ����� 
	{
		if(y==1)
		{
			switch (x)
			{
				case 1:
				return 0; 
				break;
				case 2:
				return  31; 
				break;
				case 3:
				return  (31+29); 
				break;
				case 4:
				return  (31+29+31); 
				break;
				case 5:
				return  (31+29+31+30); 
				break;
				case 6:
				return  (31+29+31+30+31); 
				break;
				case 7:
				return  (31+29+31+30+31+30); 
				break;
				case 8:
				return  (31+29+31+30+31+30+31); 
				break;
				case 9:
				return  (31+29+31+30+31+30+31+31); 
				break;
				case 10:
				return  (31+29+31+30+31+30+31+31+30); 
				break;
				case 11:
				return  (31+29+31+30+31+30+31+31+30+31); 
				break;
				case 12:
				return  (31+29+31+30+31+30+31+31+30+31+30); 
				break;
				
			 } 
		 } 
        else if(y==0)
		{
			switch(x)
			{
			    case 1:
				return 0; 
				break;
				case 2:
				return  31; 
				break;
				case 3:
				return  (31+28); 
				break;
				case 4:
				return  (31+28+31); 
				break;
				case 5:
				return  (31+28+31+30); 
				break;
				case 6:
				return  (31+28+31+30+31); 
				break;
				case 7:
				return  (31+28+31+30+31+30); 
				break;
				case 8:
				return  (31+28+31+30+31+30+31); 
				break;
				case 9:
				return  (31+28+31+30+31+30+31+31); 
				break;
				case 10:
				return  (31+28+31+30+31+30+31+31+30); 
				break;
				case 11:
				return  (31+28+31+30+31+30+31+31+30+31); 
				break;
				case 12:
				return  (31+28+31+30+31+30+31+31+30+31+30); 
				break;	
	         }
			
		}	
	} 
	
	int calyearday()//��������ϵ�������� 
	{
		if(year==1900)
		{
			yearday=0;
		}
		else
		{
			for(int i=0;i+1900<year;i++)
			{
				if(this->yearjudge(i+1900)==1)
				{
					yearday=yearday+366;
				} 
				else
				{
					yearday=yearday+365;
				}
			}
		}
	 } 
	 int year,month,day;
	int yearday,monthday;	
	private:
 } ;
 int main()
 {
 	int m,n,q;
 	scanf("%d-%d-%d",&m,&n,&q);
 	date A(m,n,q);
 	A.calyearday();
 	A.print((A.yearday+A.calmonthday(n,A.yearjudge(m))+A.day-1)%7);
 	return 0;
 }
