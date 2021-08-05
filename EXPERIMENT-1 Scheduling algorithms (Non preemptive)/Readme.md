## FCFS CPU SCHEDULING ALGORITHM
For FCFS scheduling algorithm, read the number of processes/jobs in the system, their CPU burst times. The 
scheduling is performed on the basis of arrival time of the processes irrespective of their other parameters. Each 
process will be executed according to its arrival time. Calculate the waiting time and turnaround time of each of 
the processes accordingly.

## 1.3.2 SJF CPU SCHEDULING ALGORITHM
For SJF scheduling algorithm, read the number of processes/jobs in the system, their CPU burst times. Arrange 
all the jobs in order with respect to their burst times. There may be two jobs in queue with the same execution 
time, and then FCFS approach is to be performed. Each process will be executed according to the length of its 
burst time. Then calculate the waiting time and turnaround time of each of the processes accordingly.

## 1.3.3 PRIORITY CPU SCHEDULING ALGORITHM
For priority scheduling algorithm, read the number of processes/jobs in the system, their CPU burst times, and 
the priorities. Arrange all the jobs in order with respect to their priorities. There may be two jobs in queue with 
the same priority, and then FCFS approach is to be performed. Each process will be executed according to its 
priority. Calculate the waiting time and turnaround time of each of the processes accordingly.

## 1.3.4 ROUND ROBIN CPU SCHEDULING ALGORITHM
For round robin scheduling algorithm, read the number of processes/jobs in the system, their CPU burst times, 
and the size of the time slice. Time slices are assigned to each process in equal portions and in circular order, 
handling all processes execution. This allows every process to get an equal chance. Calculate the waiting time 
and turnaround time of each of the processes accordingly.

## 1.4 PROCEDURE
 --> Open terminal
 --> Open editor and type type program and close the editor
 -->$ cc roundrobin.c
 -->$ ./a.out
