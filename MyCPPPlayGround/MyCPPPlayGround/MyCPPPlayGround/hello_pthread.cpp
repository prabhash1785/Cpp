// Example program
#include <iostream>
#include <string>
#include <pthread.h>

using namespace std;

void *print_message(void *m);

int main()
{
  const char *m1 = "Thread 1";
  int r1;
  pthread_t t1;
  
  r1 = pthread_create(&t1, NULL, print_message, (void*)m1);
  
  if(r1) {
    fprintf(stderr,"Error - pthread_create() return code: %d\n", r1);
	exit(EXIT_FAILURE);   
  }
  
  printf("Pthread 1 created....");
  
  pthread_join(t1, NULL);
  exit(EXIT_SUCCESS);
}


void *print_message(void *m) {
   char *mess = (char*) m; 
	cout << "Message ==> " << mess << endl;
}
