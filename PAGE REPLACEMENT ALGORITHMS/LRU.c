#include<stdio.h>
void display();
int fr[3],n,m;
int main()
{

	int page[25],i,j,fs[3];
	int index,k,l,flag1=0,flag2=0,pf=0,frsize=3;
	printf("Enter length of the reference string: ");
	scanf("%d",&n);
	printf("Enter the reference string: ");
	for(i=0;i<n;i++){
		scanf("%d",&page[i]);
	}
	printf("Enter no of frames: ");
	scanf("%d",&m);
	for(i=0;i<3;i++)
	{
		fr[i]=-1;
	}
	for(j=0;j<n;j++)
	{
		flag1=0;
		flag2=0;
	for(i=0;i<m;i++)
	{
		if(fr[i]==p[j])
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
				fr[i]=p[j]; 
				flag2=1;
				break;
			}
		}
	}
	if(flag2==0)
	{
	for(i=0;i<m;i++)
			fs[i]=0;
	for(k=j-1,l=1;l<=m-1;l++,k--)
	{
		for(i=0;i<m;i++)
		{
			if(fr[i]==p[k]) fs[i]=1;
		}		
	}
	for(i=0;i<m;i++)	
	{		
		if(fs[i]==0)
			index=i;
	}
	fr[index]=p[j];
	pf++;
	}
		display();
	}
	printf("\n no of page faults :%d",pf+m);
}
void display()
{
	int i;
	for(i=0;i<m;i++)
		printf("\t%d",fr[i]);
	printf("\n");
}
