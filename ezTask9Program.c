#include <time.h>
#include <stdio.h>
#include <unistd.h>

int main () {
	time_t startTime =  0;
	time_t currentTime = 0;
	float setTime = 20;

	time(&startTime);
	while (difftime(time(NULL), startTime) < setTime) {
		sleep(1);
		currentTime++;
		printf("A second has passed!\n");
	}
	return currentTime;
}