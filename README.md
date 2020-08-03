#  Title: CP386: Assignment 4 – Spring 2020
 
# Motivation: This was an assigment for a class on operating systems. This assigment was designed to help practice the concept of deadlock avoidance.

# Installation: installed already in computer just using the terminal and the linux virtualization.

# ScreenShots:







# Individual contribution: I worked alone on this project, I did all the functions and the main.


# Features: There are many features, but I guess the main 4 would be the *, Run, RQ, RL command, theses commmands print out everything, run the threads in the safety sequance, Release the threads and Request the threads. The other features that are in this program are the functions, one can print a 2d array the other prints a 1d array, another checks the safetly argorithm and tells you if its safe or not.

# tests: So far only error codes, tried looking over the code multiple times but dont know how to fix it yet


                             ^
a.c:166:70: error: ‘customer_num’ undeclared (first use in this function)
                 int is_safe = safeAlgo(work, finish,available, need, customer_num,resource_num);
                                                                      ^
a.c:166:83: error: ‘resource_num’ undeclared (first use in this function)
                 int is_safe = safeAlgo(work, finish,available, need, customer_num,resource_num);
                                                                                   ^
a.c:172:48: error: subscripted value is neither array nor pointer nor vector
                             allocation[row_num][e] = allocation[row_num][e] - atoi(agrv[3+e]);
                                                ^
a.c:172:73: error: subscripted value is neither array nor pointer nor vector
                             allocation[row_num][e] = allocation[row_num][e] - atoi(agrv[3+e]);
                                                                         ^
a.c:173:42: error: subscripted value is neither array nor pointer nor vector
                             need[row_num][e] = need[row_num][e] - atoi(agrv[3+e]);
                                          ^
a.c:173:61: error: subscripted value is neither array nor pointer nor vector
                             need[row_num][e] = need[row_num][e] - atoi(agrv[3+e]);
                                                             ^
a.c:198:24: error: expected expression before ‘>’ token
                 if(3+h=> argc ||  atoi(agrv[3+h])<0)
                        ^
a.c:205:42: error: ‘i’ undeclared (first use in this function)
                 if( allocation[user_num][i] - atoi(agrv[3+h]) <0)
                                          ^
a.c:220:41: error: subscripted value is neither array nor pointer nor vector
                     allocation[user_num][i] = allocation[user_num][i] - atoi(agrv[3+i]);
                                         ^
a.c:220:67: error: subscripted value is neither array nor pointer nor vector
                     allocation[user_num][i] = allocation[user_num][i] - atoi(agrv[3+i]);
                                                                   ^
a.c:221:35: error: subscripted value is neither array nor pointer nor vector
                     need[user_num][i] = need[user_num][i] - atoi(agrv[3+i]);
                                   ^
a.c:221:55: error: subscripted value is neither array nor pointer nor vector
                     need[user_num][i] = need[user_num][i] - atoi(agrv[3+i]);
                                                       ^
a.c:246:32: warning: passing argument 1 of ‘safeSq’ from incompatible pointer type [-Wincompatible-pointer-types]
         int  safe_num = safeSq(structure1);
                                ^
a.c:20:5: note: expected ‘int *’ but argument is of type ‘Thread * {aka struct thread *}’


osc@ubuntu:~/Assignment_4$ ./a.out 10 5 7 8 
Number of Customers: 5 
Currently Available resources: 10 5 7 8
Maximum resources from file:
6,4,7,3
4,2,3,2
2,5,3,3
6,3,3,2
5,6,7,5
Enter Command : *
Available:	10 5 7 8 
Max:
6,4,7,3
4,2,3,2
2,5,3,3
6,3,3,2
5,6,7,5
Allocation:
0,0,0,0
0,0,0,0
0,0,0,0
0,0,0,0
0,0,0,0
Need:
6,4,7,3
4,2,3,2
2,5,3,3
6,3,3,2
5,6,7,5




# Authors: Ryan Ayala



