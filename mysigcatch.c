#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void signal_handler(int signal) {
printf("SIGINT signal caught!\n");
exit(0);
}

int main() {
signal(SIGINT, signal_handler);
while (1) {
//infinite loop  waiting for SIGINT
}
return 0;
}
