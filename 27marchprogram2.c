//new topic
//passing arrays to function 

//passing entire array at once 
/*#include<stdio.h>
void reference(int[],int );
int main()
{
	int arr[100],n;
	int i;
	printf("enter n");
	scanf("%d",&n);
	printf("enter array elemnts/n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[1]);
	}
	printf("/n elements by reference");
	reference(arr,n);
	return 0;
	
}
void reference(int a[],int size)
{
	int i;
	for (i=0,i<size;i++)
	{
		printf("%d",a[i]);
	}
}*/
//passing element by array#includ
#include<stdio.h>
void value(int);
int main()
{int arr[100],n;
int i;
printf("enter r");
scanf("%d",&n);
printf("enter array element/n");
for(i=0;i<n;i++)
{
	scanf("%d",&arr[1]);
}
printf("passing elements by value:");
for(i=0; i<n; i++)
{
	value(arr[i]);
}
return 0;
}


