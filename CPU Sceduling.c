#include<stdio.h>
#include<conio.h>
#include<unistd.h>
#include<pthread.h>
#include<fcnlt.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
int count,i,n;
int wt=0,tart=0.art[10],bt[10],rt[10];
int flag=0,tq=10;
int time, ramaining;
printf("Enter the total number of processs:\n");
scanf("%d",n);
remaining=n;
for(count=0;count<n;count++)
{
printf("Enter Arrival Time for process P%d:count+1");
scanf("%d",&art[count]);
printf("Enter Burst  Time for process P%d: count+1");
scanf("%d",&art[count]);
}
printf("Enter time quantum:%d",tq);
printf("Process\t Turnnaround Time\t Wating Time"\n);
for(time=0;count; remaining=0;)
{
if([count]<=tq && [count]>0)
{
time+=rt[count];
rt[count]=0;
flag=0;
}
else if(rt[count]>0)
{
rt[count]-=tq;
time+=tq;
}
if(rt[count]==0 && flag==0)
{
remaining--;
printf("P[%d]\t%d\t%d\n",count+1.time-art[count].time-art[count]-bt[count]);
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
printf("Average wating time=%f\n, wt*1.0/n);
printf("Average turnoround time=%f\n, tart*1.0/n);
return 0;
}