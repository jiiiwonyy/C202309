#include <stdio.h>

int main() {
	int i = 0;
	while (i<10) {
		if (i % 2 == 0) {
			i++;
			continue;
		}
		printf("%d Hello World!\n", i);
		i++;
	}
	return 0;
}