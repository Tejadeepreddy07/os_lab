#include<stdio.h>
void display();
int fr[3],n,m;
int main()
{
	int i,j,page[25];
	int flag1=0,flag2=0,pf=0,top=0;
	printf("Enter length of the reference string: ");
	scanf("%d",&n);
	printf("Enter the reference string: ");
	for(i=0;i<n;i++){
		scanf("%d",&page[i]);
	}
	printf("Enter no of frames: ");
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		fr[i]=-1;
	}
	for(j=0;j<n;j++)
	{
	flag1=0; flag2=0; 
	for(i=0;i<n;i++)
	{
		if(fr[i]==page[j])
		{
			flag1=1; 
			flag2=1; 
			break;
		}
	}
	if(flag1==0)
	{
		for(i=0;i<m;i++)
		{
			if(fr[i]==-1)
			{
				fr[i]=page[j]; 
				flag2=1; 
				break;
			}
		}
	}
	if(flag2==0)
	{
		fr[top]=page[j];
		top++;
		pf++;
		if(top>=frsize)
			top=0;
	}
	display();
	}
	printf("Number of page faults : %d ",pf+m);

}
void display()
{
	int i;
	for(i=0;i<m;i++)
		printf("%d\t",fr[i]);
	printf("\n");
}
