#include <stdio.h>

int main() {
	int i = 0;
	do {
		if (i % 2 == 0)
		{
			i++;
			continue;
		}

		printf("%d Hello world!\n", i);
		i++;
	} while (i < 10);

	return 0;
}