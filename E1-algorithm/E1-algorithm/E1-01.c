#include <stdio.h>
int main() {
	int num;
	int c = 0;
	int array[100];
	scanf("%d", &num);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
	}
	for (int i = 0; i < 5; i++) {
		if (array[i] == num) c++;
	}
	printf("%d", c);
}