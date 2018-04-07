#include<stdio.h>
#define N 10 //defining that no. of process cannot exceed 10
typedef struct
{
      int process_id, arrival_time, burst_time, priority;
      int q, ready;
}s;//structure for multiqueue
typedef struct
{
      int p_id;ra_t,rb_t,rp;
}r;//structure for round robin
typedef struct
{
      int fp_id;fa_t,fb_t,fp;
}f;//structure for first come first serve
typedef struct
{
      int pp_id;pa_t,pb_t,pp;
}p;//structure for priority queue
int Queue(int q) {
      if(q == 0 || q == 1 || q == 2 || q == 3)// 3 queue generation
      {
            return 1;
      }
      else
      {
            return 2;
      }
}
int main()//start of main class
{
      int n, i, temp_process, time, j, y;
      s temp;
      printf("Enter Total Number of Processes:\t");
      scanf("%d", &n);// taking no. of process from user
      s process[n];//array of n size of s type (multiqueue type)
      for(i = 0; i < n; i++)
      {
            printf("\nProcess ID:\t");
            scanf("%d", &process[i].process_id);//taking process ID
            printf("Arrival Time:\t");
            scanf("%d", &process[i].arrival_time);//taking arrival time
            printf("Burst Time:\t");
            scanf("%d", &process[i].burst_time);//taking burst time
            printf("Process Priority:\t");
            scanf("%d", &process[i].priority);//taking priority 
      } r proces[n];//array of n size of type r (round robin)
      f pro[n];//array of n size of type f (fcfs)
      p pr[n]; //array of n size of type r (priority)   
      for(i=0;i<n;i++)//loop from 0 to total no. of process
      {
            if(process[i].priority>0 && process[i].priority<10)
            {     rr=rr+1;
                  proces[i].p_id=process[i].process_id;
                  proces[i].ra_t=process[i].arrival_time;
                  proces[i].rb_t=process[i].burst_time;
                  proces[i].rp=process[i].priority;
                  round_robin();
            }
            else if(process[i].priority>10 && process[i].priority<20)
            {  
                  fcfs();
            }
            else
            {
                  prior();
            }
      }

      return 0;
 }
round_robin()
 {
      int total=0,count=0,i;
      int wait_time = 0, turnaround_time = 0, temp[10]; 
      float average_wait_time, average_turnaround_time;
      printf("round_robin :\t");
      printf("quantum time of 4 seconds:\t");
      int static time_quantum=4;
      int x=rr;
      for(i=0;i<10;i++)
      {
            temp[i]=proces[i].rb_t;
      }
       printf("\nProcess ID\t\tBurst Time\t Turnaround Time\t Waiting Time\n");
      for(total = 0, i = 0; x != 0;) 
      { 
            if(temp[i] <= time_quantum && temp[i] > 0) 
            { 
                  total = total + temp[i]; 
                  temp[i] = 0; 
                  counter = 1; 
            } 
            else if(temp[i] > 0) 
            { 
                  temp[i] = temp[i] - time_quantum; 
                  total = total + time_quantum; 
            } 
            if(temp[i] == 0 && counter == 1) 
            { 
                  x--; 
                  printf("\nProcess[%d]\t\t%d\t\t %d\t\t\t %d", i + 1, proces[i].rb_t, total - proces[i].ra_t, total - proces[i].rb_t);
                  wait_time = wait_time + total -proces[i].ra_t - proces[i].rb_t; 
                  turnaround_time = turnaround_time + total - proces[i].ra_t; 
                  counter = 0; 
            } 
            if(i == limit - 1) 
            {
                  i = 0; 
            }
            else if(proces[i+1].ra_t <= total) 
            {
                  i++;
            }
            else 
            {
                  i = 0;
            }
      } 
      average_wait_time = wait_time * 1.0 / limit;
      average_turnaround_time = turnaround_time * 1.0 / limit;
      printf("\n\nAverage Waiting Time:\t%f", average_wait_time); 
      printf("\nAvg Turnaround Time:\t%f\n", average_turnaround_time); 
      return 0; 
 }
fcfs()
{
      printf("first come first serve :\t");
      printf("quantum time of 10 seconds:\t");
      int static quantm=10;
        return 0;
}
prior()
{
      printf("priority scheduling :\t");
      printf("quantum time of 10 seconds:\t");
      int static quant=10;
      return 0;
}}





