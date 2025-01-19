#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

int count = 0; 

void custom_handler(int sig) {
count++;
printf("Caught signal %d (%d times)\n", sig, count);

if (count >= 2) {
signal(SIGINT, SIG_DFL); //restore default behaviour
}
}

int main(void) {
signal(SIGINT, custom_handler);
while (1) {
//infinite loop waiting for SIGINT
}
return 0;
}
