/*Name: Aditya Rana
  Roll number: 2019405*/
#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

int a = 10;

void* child_thread(void * arg){
	printf("%s\n", "CHILD");
	while(a!=-90){
		printf("%d ",a);
		a -= 1;
	}
	printf("%d ",a);
	return NULL;
}

void parent_thread(){
	printf("%s\n", "PARENT");
	while(a!=100){
		printf("%d ", a);
		a +=1;
	}
	printf("%d ",a);
}

int main(int argc, char const *argv[])
{
	/* code */
	pthread_t newthread;
	pthread_create(&newthread, NULL, child_thread, NULL);
	parent_thread();
	pthread_join(newthread, NULL);
	printf("\n");
	return 0;
}