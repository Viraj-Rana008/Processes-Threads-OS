/*Name: Adity Rana
  Roll number: 2019405*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int a = 10;

void add(int c, char* name){
	a = a+c;
	printf("%s\n", name);
	while(a!=101 && a!=-91){
		printf("%d ", a);
		a = a + c;
	}
	printf("\n");
}

int main(int argc, char const *argv[])
{
	/* code */
	pid_t pid;

	pid = fork();

	if(pid<0){
		printf("%s\n", "ERROR");
	}
	else if(pid==0){
		add(-1, "CHILD");
	}
	else{
		wait(NULL);
		add(1, "PARENT");
	}
	return 0;
}