#include <stdio.h>
#include <cstdlib>

int main()
{
	// Start
	system("color 0a");
	printf("==============================\n");
	printf("       Java Hacker 1.0\n");
	printf("==============================\n");

	printf("What do you want to hack ?\n");
	printf("1: single hack\n");
	printf("2: hack any website of the world\n");
	printf("3: hack an ip adress\n");
	printf("I choose: ");
	scanf("%s"); getchar();
	printf("Why do you want to scan it ?: ");
	scanf("%s"); getchar();	
	printf("Scanning ip...\n");
	printf("Installing resources...\n");
	printf("Do you want to install cstdbuild ?(Y/N/O/I): ");
	scanf("%s"); getchar();
	printf("Loading...\n");
	printf("\n");
	system("nslookup google.com");
	printf("For the example, we hack google!\n");
	return 0;
}