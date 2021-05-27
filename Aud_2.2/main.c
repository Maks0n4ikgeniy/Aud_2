#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(void) {
	char mass[50] = { 0 }, j = 0;
	mass[49] = '\0';
	int i = 0;
	char c = 0;
	printf("ctrl+z to stop!\n");
	while (1) {
		char ch[256] = { 0 };
		ch[255] = '\0';
		c = getchar();
		while (c != ' ' && c != '\n' && c != -1) {
			ch[i++] = c;
			c = getchar();
		}
		int prov = 0;
		for (int t = 0; t < strlen(ch); ++t) {
			if (ch[t] >= 48 && ch[t] <= 57)
				continue;
			else {
				prov = 1;
				break;
			}
		}
		if (c == -1)
			break;
		i = 0;
		if (prov == 1)
			continue;
		mass[j++] = atoi(ch);
	}
	printf("SQRTS: ");
	for (int i = 0; i < strlen(mass); i++)
		printf("%d ", mass[i] * mass[i]);
	printf("\n");
	printf("done");
	return 0;
}