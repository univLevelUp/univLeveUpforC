#include <stdio.h>
#include <string.h>

int get_counter(char *s);

int main(void) {

	char s[100];

	printf("Please enter a string:");
    gets(s);
    printf("The number of punctuation marks is %d.", get_counter(s));
	return 0;

}

int get_counter(char *s) {
	int count=0;
	for (int i=0; i<strlen(s);i++) {
		if( s[i] ==',' || s[i] == '.')
		count++;
	}
	return count;
}
