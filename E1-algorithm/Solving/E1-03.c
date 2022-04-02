#include <stdio.h>
#include <string.h>
int main(void)
{
	// ( = 10cm
	// (( = 15cm (+5)
	char str[50];
	int array[50];
	int length = 10;

	scanf("%s", str);
	for (int i = 0; i < strlen(str); i++) {
		if (str[i] == 40) array[i] = 1;
		else if (str[i] == 41) array[i] = -1;
	}
	for (int i = 1; i < strlen(str); i++) {
		if (array[i] == array[i - 1]) {
			length += 5;
		}
		else length += 10;
	}
	printf("%d", length);
}