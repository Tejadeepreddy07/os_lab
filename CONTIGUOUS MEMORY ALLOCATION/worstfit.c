#include <stdio.h>
void main()
{
	int b1[10],f1[10],i,j,b,f,bf[10],temp,temp1=0,pos,ff[10],bb[10];
	printf("enter no of blocks");
	scanf("%d",&b);
	printf("enter no of files");
	scanf("%d",&f);
	printf("\nEnter the size of the blocks:-\n"); 
	for(i=1;i<=b;i++)
	{
		printf("Block %d:",i);
		bf[i]=0;
		scanf("%d",&b1[i]);
	}
	printf("Enter the size of the files :-\n"); 
	for(i=1;i<=f;i++)
	{
		printf("File %d:",i);
		scanf("%d",&f1[i]);
		ff[i]=0;
		bb[i]=0;
	}
	for(i=1;i<=f;i++)
	{
		for(j=1;j<=b;j++)
		{
			if(bf[j]!=1)
			{
				temp=b1[j]-f1[i];
				if(temp>=0&&temp>=temp1)
				{
					temp1=temp;
					pos=j;
				}
			}
		}
		bf[pos]=1;
		ff[i]=pos;
		bb[i]=temp1;
		temp1=0;
	}
	printf("\nFile_no:\tFile_size :\tBlock_no:\tBlock_size:\tFragement");
	for(i=1;i<=f;i++)
	{
		printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,f1[i],ff[i],b1[ff[i]],bb[i]);
	}
}
