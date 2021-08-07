### 3.1 OBJECTIVE

Write a C program to simulate Bankers Algorithm for Dead Lock Avoidance

### 3.2 RESOURCE 

Ubuntu Operating system

### 3.3 PROGRAM LOGIC

In a multiprogramming environment, several processes may compete for a finite number of resources. A 
process requests resources; if the resources are not available at that time, the process enters a waiting state. 
Sometimes, a waiting process is never again able to change state, because the resources it has requested are held 
by other waiting processes. This situation is called a deadlock. Deadlock avoidance is one of the techniques for 
handling deadlocks. This approach requires that the operating system be given in advance additional information 
concerning which resources a process will request and use during its lifetime. With this additional knowledge, it 
can decide for each request whether or not the process should wait. To decide whether the current request can be 
satisfied or must be delayed, the system must consider the resources currently available, the resources currently 
allocated to each process, and the future requests and releases of each process. Banker’s algorithm is a deadlock 
avoidance algorithm that is applicable to a system with multiple instances of each resource type.

### 3.4 PROCEDURE
 --> Open terminal
 --> Open editor and type type program and close the editor
 --> lab2@lab2-HP-dx2480-MT-KL969AV:~/ Desktop $ cc deadlockavoidance.c
 -->lab2@lab2-HP-dx2480-MT-KL969AV:~/ Desktop $ ./a.out
