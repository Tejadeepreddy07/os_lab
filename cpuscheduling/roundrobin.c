#include <stdio.h>
int main()
{
	int bu[10],wt[10],d[10],tat[10],i,j,n,max,t,temp=0;
	float tatavg=0,wtavg;
	printf("Enter no of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter brust time of process-%d:",i+1);
		scanf("%d",&bu[i]);
		d[i]=bu[i];
		printf("\n");
	}
	printf("Enter the quantum time:");
	scanf("%d",&t);
	max=bu[0];
	for(i=1;i<n;i++)
	{
		if(max<bu[i])
		{
			max=bu[i];
		}
	}
	for(j=0;j<(max/t)+1;j++)
	{
		for(i=0;i<n;i++)
		{
			if(bu[i]!=0)
			{
				if(bu[i]<=t) {
					tat[i]=temp+bu[i];
					temp=temp+bu[i];
					bu[i]=0;
				}				
				else {
					bu[i]=bu[i]-t;
					temp=temp+t;
				}
			}	
		}
	}
	for(i=0;i<n;i++)
	{
		wt[i]=tat[i]-d[i];
		tatavg+=tat[i];
		wtavg+=wt[i];
	} 
	printf("\nprocess\tBrust time\twaiting time\tTrunaround time");
	for(i=0;i<n;i++)
	{
		printf("\np%d\t\t%d\t\t%d\t\t%d",i+1,d[i],wt[i],tat[i]);
	}
	printf("\nAverage waiting time:%f",wtavg/n);
	printf("\nAverage turnarouund time:%f",tatavg/n);
	return 0;
}
