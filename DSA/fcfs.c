 #include <stdio.h>
void main(){
}
int n,,i,temp=0;
int a[20],b[20],wt[20], p[20],tt[20],cp;
float avgw, avgt;
printf("Enter number of procesess in the CPU: ");
scanf("%d",&n);
printf("Applying FCFS \n");
printf("\nEnter process id \n");
for(i=0;i<n;i++){

printf("\nEnter arrival time for each process \n"); for(i=0;i<n;i++)
{
}
{
printf("\nEnter Burst time for each process \n"); for(i=0;i<n;i++)
}
printf("process id %d ",i+1); scanf("%d",&p[1]);
{
printf("Arrival time of process %d ",i+1); scanf("%d",&a[i]);
printf("\n"); for(i=0;i<n;i++)
}
cp=0;
{
}
printf("Burst time of process %d ",1+1); scanf("%d",&b[i]);
for(j=0;j<n-1-1;j++)
{
if(a[j]>a[j+1])
{
}
}
printf("Process \t Arrival Time \t Burst Time \t Turnaround Time It Waiting Time \n");
for(i=0;i<n;i++)
tt[1]=0; wt[1]=0;
avg-avgs/n;
avgt-avgt/n;
temp-a[j]; a[j]=a[j+1]; a[j+1]=temp;
temp-p[j];
P[j]-p[j+1]; P[j+1]=temp;
temp-b[1]; b[j]=b[j+1]; b[j+1]=temp;
cp=cp+b[1];
tt[i]=cp-a[1];
wt[i]-tt[i] b[1]; avgw-avgw+wt[1];
avgt-avgt tt[i];
printf("%d \t\t%d \t\t%d \t\t%d \t\t\t%d\n",p[i],a[i],b[i],tt[i],wt[i]);
printf("Average Waiting Time
%.2f\n",avgw);
printf("Average Turnaround Time - %.2f\n",avgt);

