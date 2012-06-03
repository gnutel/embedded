#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

/*
void *thread_func(void *arg)
{
	int incoming = (int *)arg;
	return incoming;
}
*/

void *hello(th_num)
{
	printf("hello world! %d\n", th_num);
	return NULL;
}

int main(void)
{
	pthread_t thread_ID[10];
	void *exit_status;
	int i;

	for (i=0; i<10; i++){
		pthread_create(&thread_ID[i], NULL, &hello, (int*)i);
	}

	for (i=0; i<10; i++){
		pthread_join(thread_ID[i], &exit_status);
	}

	return 0;
}
