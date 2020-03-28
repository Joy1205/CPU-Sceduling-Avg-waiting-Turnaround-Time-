#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
int count,n;
int wt=0,tart=0,art[10],bt[10],rt[10];
int flag=0,tq;
int time, remaining;
printf("Enter the total number of processs:\n");
scanf("%d",&n);
remaining=n;
for(count=0;count<n;count++)
{
printf("Enter Arrival Time for process P%d:",count+1);
scanf("%d",&art[count]);
  if(art[count]<3)
  {
    printf("\n\n Please Enter Arrival Time 3 or more than 3\n\n");
    exit(0);
  }
printf("Enter Burst  Time for process P%d:",count+1);
scanf("%d",&bt[count]);
  rt[count]=bt[count];
}
printf("Enter time quantum:");
  scanf("%d",&tq);
printf("Process\t Turnnaround Time\t Wating Time\n");
for(time=0,count=0; remaining!=0;)
{
if(rt[count]<=tq && rt[count]>0)
{
time+=rt[count];
rt[count]=0;
flag=1;
}
else if(rt[count]>0)
{
rt[count]-=tq;
time+=tq;
}
if(rt[count]==0 && flag==1)
{
remaining--;
printf("P[%d]\t%d\t\t%d\n",count+1,time-art[count],time-art[count]-bt[count]);
wt+=time-art[count]-bt[count];
tart+=time-art[count];
flag=0;
}
if(count==n-1)
count=0;
else if(art[count+1]<=time)
count++;
else
count=0;
}
printf("Average waiting time=%f\n", wt*1.0/n);
printf("Average turnaround time=%f", tart*1.0/n);
return 0;
}
