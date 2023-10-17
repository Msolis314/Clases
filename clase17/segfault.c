#include <stdio.h>

int main() {
	char *str= " hello, segmentation fault";
	str[0] = "h";
	return 0;
}
