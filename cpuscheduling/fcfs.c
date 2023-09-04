#include <stdio.h>
int main()
{
	int bu[10],wt[10],tat[10],i,n;
	float tatavg,wtavg;
	printf("Enter no of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter brust time of process-%d:",i+1);
		scanf("%d",&bu[i]);
		printf("\n");
	}
	wt[0]=wtavg=0;
	tat[0]=tatavg=bu[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bu[i-1];
		tat[i]=tat[i-1]+bu[i];
		wtavg=wtavg+wt[i];
		tatavg=tatavg+tat[i];
	}
	printf("\nprocess\tBrust time\twaiting time\tTrunaround time");
	for(i=0;i<n;i++)
	{
		printf("\np%d\t\t%d\t\t%d\t\t%d",i+1,bu[i],wt[i],tat[i]);
	}
	printf("\nAverage waiting time:%f",wtavg/n);
	printf("\nAverage turnarouund time:%f",tatavg/n);
	return 0;
}
