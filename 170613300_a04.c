#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <sys/stat.h>
#include <time.h>
#include <semaphore.h>

 

typedef struct thread //represents a single thread, you can add more members if required
{
	char tid[4];//id of the thread as read from file
	unsigned int startTime;
	pthread_t handle;
	int retVal;
} Thread;





int main(int argc,char* argv[]){

int num_resources =  argc -1;


int* avilable  = malloc(sizeof(int)*num_resorces); // allocated for avilable;


int num_customers = numofcustormers( argc[1] 




int* max = malloc( sizeof(int)*num_customers* num_resources);


int* allocation = malloc(sizeof(int) *num_customers* num_resources);

int* need = malloc(sizeof(int) * num_curomers* num_resources); 













} 






// reads the numer of rows
int numofcustomers(char* fileName)//do not modify this method
{
	FILE *in = fopen(fileName, "r");
	



	return coustumer_count;
}
