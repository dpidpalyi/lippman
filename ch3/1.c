#include <stdio.h>
#include <stdlib.h>

struct s {
	int n;
};

int main() {
	struct s *ptr = malloc(sizeof(struct s));
	(*ptr).n = 10;
	printf("%d\n", ptr->n);
	return 0;
}
