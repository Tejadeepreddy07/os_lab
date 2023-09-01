#include <stdio.h>
int main()
{
	int bu[10],wt[10],p[10],tat[10],pri[10],i,j,n,temp;
	float tatavg,wtavg;
	printf("Enter no of process:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter brust time & priority of process-%d:",i+1);
		scanf("%d %d",&bu[i],&pri[i]);
		p[i]=i+1;
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(pri[i]>pri[j])
			{
				temp=bu[i];
				bu[i]=bu[j];
				bu[j]=temp;
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				temp=pri[i];
				pri[i]=pri[j];
				pri[j]=temp;
			}
		}
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
	printf("\nprocess\tpriority\tBrust time\twaiting time\tTrunaround time");
	for(i=0;i<n;i++)
	{
		printf("\np%d\t\t%d\t\t%d\t\t%d\t\t%d",p[i],pri[i],bu[i],wt[i],tat[i]);
	}
	printf("\nAverage waiting time:%f",wtavg/n);
	printf("\nAverage turnarouund time:%f",tatavg/n);
	return 0;
}
