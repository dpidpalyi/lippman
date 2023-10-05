#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void foo() {
	abort();
}

int main() {
	foo();
	assert(1 == 0);

	return 0;
}
