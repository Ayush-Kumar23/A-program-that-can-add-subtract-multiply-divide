#include<stdio.h>
int add(int ar[])
{
	int sum=0;
	for(int i=0;i<ar.size();i++)
	sum=sum+ar[i];
	return sum;
}
int sub(int a,int b)
{
	int dif=a-b;
	return dif;
}
int mul(int ar[])
{
	int sum=0;
	for(int i=0;i<ar.size();i++)
	sum*=ar[i];
	return sum;
}
int div(int a,int b)
{
	float res=a/b;
	return res;
}
int main()
{
	int choice;
	printf("Enter your choice");
	scanf("%d",&choice);
	switch(choice):
	case 1:
		int n,arr[100000];
		printf("Enter no. of elements");
		scanf("%d",&n);
		printf("Enter elements to add");
		for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
		int res=add(arr);
		printf("%d",res);
	case 2:
		int x,y;
		printf("Enter elements to subtract");
		scanf("%d,%d",&x,&y);
		int result=sub(x,y);
		printf("%d",result);
	case 3:
		int x,arr[1000000];
		printf("Enter number of elements to multiply");
		scanf("%d",&x);
		printf("Enter elements");
		for(int i=0;i<x;i++)
		scanf("%d",&arr[i]);
		int result=mul(arr[]);
		printf("%d",result);
	case 4:
		int x,y;
		printf("Enter elements to divide");
		scanf("%d,%d",&x,&y);
		int result=div(x,y);
		printf("%d",result);
}