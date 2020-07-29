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

intialize( allocation, numofcustomers, num_resources);

intialize( need , numofcustomers, num_resources);






int*  work =  malloc(sizeof(int)*num_resorces);

int*  finish = malloc(sizeof(int)*num_resources);




} 






// reads the numer of rows
int numofcustomers(char* fileName)//do not modify this method
{
	FILE *in = fopen(fileName, "r");
	



	return coustumer_count;
}


// intitalize  the arrays  2d 

void  intialize( int* p,int n, int m ){

for( int i=0; i < n ; i++){

   for ( int j=0; j<m ; j++ ){

        p[i][j] = 0;
   }
}

return;
}


// populate max 

void populatemax (char * fileName, int*max, int n, int m ){





}


//intialize the array 1d

void 1d( int*p, int n){


for(int i =0;i <n; i++){

   p[i] = 0;

}


return;

}
