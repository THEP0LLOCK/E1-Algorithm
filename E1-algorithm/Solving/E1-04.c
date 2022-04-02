#include <stdio.h>
int main(void) 
{
	int h;
	int m;
	int time;

	scanf("%d %d", &h,&m);
	scanf("%d", &time);
	m += time;
	while (m >= 60) {
		m -= 60;
		h++;
	}
	if (h >= 24) h -= 24;



	printf("%d %d", h, m);





}