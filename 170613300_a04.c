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
        //id of the thread as read from file
	int customer_num;
        int* available;
        int* max;
        int* need; 
        int* work;
        int* finish;
        int* allocation;
        sem_t* lock;
        int num_resources;
	int* safe;
        int safe_size;
	int* safe_index; 
} Thread;





int main(int argc,char* argv[]){

int num_resources =  argc -1;

int  safe_index;


int* available  = malloc(sizeof(int)*num_resorces); // allocated for avilable;

pop_avail(argc,available, argv);



int num_customers = numofcustormers( argc[1]); 




int* max = malloc( sizeof(int)*num_customers* num_resources);

populatemax (argc[1], max, num_customers, num_resources );

int* allocation = malloc(sizeof(int) *num_customers* num_resources);

int* need = malloc(sizeof(int) * num_customers * num_resources); 

intialize( allocation, num_customers, num_resources);

intialize( need , num_customers, num_resources);


int* safe = malloc(sizeof(int)* num_customers);



int*  work =  malloc(sizeof(int)*num_resorces);

int*  finish = malloc(sizeof(int)*num_customers);

pop_avail(argc,work, argv); // filled worl

1d(finish, num_ customers); // filled finish


printf("Number of Customers: %d \n",num_customers);

printf("Currently Available resources:");

for(int i = 0; i<num_resources;i++){
	printf(" %d",available[i]);


}

printf("\n");

printf("Maximum resources from file:\n");

for(int i =0; i<num_customers;i++){

for(int j =0; j<num_resources;j++){

	if(j>0){
	printf(",");
	}
printf("%d",max[i][j]);


}

printf("\n");
}


}



Thread* threads = NULL;


char  s[1025];
printf("Enter Command : ");

scanf("%s", s);


if( strcmp(s,"*")==0){
print1D(available, num_resources, "Available");

print2D(max, num_customers, num_resources, "Max");


print2D(allocation, num_customers, num_resources, "Allocation");


print2D(need, num_customers, num_resources, "Need");




}


else if (strcmp(s,"RQ")==0){





}


else if(strcmp(s,"RL")==0){





}


else if(strcmp(s,"Run")==0){
pthread_t* threads = malloc(sizeof(pthread_t)*num_customers);



int n =0;
 Thread*  structure1 = malloc(sizeof(Thread));
                          stucture1->customer_num = n;
                          structure1->available = available;
                          structure1->max = max;
                          structure1->need= need;
                          structure1->work = work;
                         structure1->finish = finish; 
                          structure1->allocation = allocation;
                        structure1->num_resources = num_resources;
                        structure1->safe = safe; 
                        structure1->safe_size = 0;



sem_t step_two;
sem_init(&step_two, 0, 1);
int  safe_num = safeSq(structure1);

if(!safe_num){

printf("There is no Safe sequence");
}

else{

print1D(structure1->safe, structure1->num_customers,"Safe Sequence is";
printf("Now going to executing the Threads:\n ");


while(n<num_customers)
		{

			Thread*  structure = malloc(sizeof(Thread));
                          stucture->customer_num = structure1->safe[n];
  			  structure->available = available;
                          structure->max = max;
 			  structure->need= need;
			  structure->work = work;
			 structure->finish = finish; 
			  structure->allocation = allocation;
			structure->lock =&step_two;
                        structure->num_resources = num_resources;
			structure->safe = safe; 
			structure->safe_size = 0;
			strucutre->safe_index =&safe_index; 
 			 pthread_create(&threads[structure1->safe[n],NULL,threadRun,(void*) structure );
   			n++;
	}



pop_avail(argc,work, argv); // filled work

1d(finish, num_ customers); // filled finish with 0 









}
}
}


// reads the numer of rows
int numofcustomers(char* fileName)//do not modify this method
{
	FILE *in = fopen(fileName, "r");

	int coustumer_count = 0;

	char c; 
	if(!in) {

	printf("could not open file");
         return -1;
	 }

	for (c =getc(in); c!= EFO ; c=getc(in)){

	if(c== '\n'){

	coustumer_count = coustumer_count + 1; 
        }

      }

    fclose(in);

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

 FILE *in = fopen(fileName, "r");

  char c; 
  if(!in){
        printf("could not open file");
         return -1;
         }

char* token = NULL;
token =  strtok(lines[k],",");
while(token!=NULL){


	for( int i =0; i<n ; i++){

		for( int j =0; j<m; j++ ){

    			max[i][j] = atoi(token);
   			token =  strtok(NULL,",");

	    	}

	   }



	}

fclose(in);
return;
}


//intialize the array 1d

void 1d( int*p, int n){


for(int i =0;i <n; i++){

   p[i] = 0;

}


return;

}

void pop_avail(int argc, int* available, char* argv){

for (int z = 1;  z<agc ; z++ ){

available[z-1] = atoi(argv[z]);

}


return;

}




void print1D(int* p, int n, char* des){

printf("%s:\t", des);

for( int i= 0; i < n; i++){

printf("%d " , p[i]);
}

printf("\n");



return;

}



void print2D(int *p, int n, int m, char*des){


printf("%s:\n",des);

for(int i =0; i<n;i++){

for(int j =0; j<m;j++){

        if(j>0){
        printf(",");
        }
printf("%d",p[i][j]);


}
printf("\n");

return; 
}


void* threadRun(void* t){     //implement this function i/n a suitable way


Thread* p = (Thread*) t;

while(true ){
sem_wait(p->lock);

if(p->safe[p->safe_index] == p-> customer_num){

break;
}

sem_post(p->lock);
sleep(.001);

} 
printf(" ---> Customer/Thread  %d\n",p->customer_num);

print1D(p->alloaction[p->customer_num],p->num_resources,"Allocated resources");

print1D(p->need[p->customer_num],p->num_resources,"Needed");

print1D(p->available[p->customer_num],p->num_resources,"Available");


printf(" Thread has started");
// work to  no deallolcation 


printf("Thread is finished\n");
printf("Thread  is relasing resources\n"):

//dealocate
print1D(p->available[p->customer_num],p->num_resources,"New Available");
sem_post(p->lock);






}



int safeSq(structure*  strut ){



for(int i = 0; i < strut->num_customers;i++){

	int is_available = 1;
	for(int k  =0; k< strut->num_resources; k++){

			if(strut->need[i][k] > strut->available[k]{

			is_available= 0;
				break;
			}



	}


	if(!strut->finish[i] && is_available){

		strut->finish[i] = 1;

 


		for(int j = 0; j< strut->num_resources;  j++){

			strut->available[j] +=  strut->allocated[i][j]
		}

		strut->safe[safe_size] = i;

		safe_size++:

		
		if(safeSq(strut)){
			return 1;
		}	

		safe_size--;

		strut->finish[i] = 0;

		for(int  p=0; p<strut->resources; p++){

			strut->available[p] -= strut->allocated[i][p];
		}

	}


} 

if(safe_size = strut->num_customers){

  return 1;
}

return 0;

}
