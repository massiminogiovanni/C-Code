#include <time.h>

int main(int argc, char *argv[]) {
	//request current time & date
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	printf("now: %d-%d-%d\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday);
	
	return 0;
}
