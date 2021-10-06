#include <stdio.h>
#include <stdlib.h>

int mystrlen( char *s );
char * mystrncpy( char *dest, char *source, int n );
char * mystrcat( char *dest, char *source );

int main() {

	return 0;
}

int mystrlen(char *) {
	int len = 0;
	while(*s) {
		len++;
		*s++;
	}
	return len;
}

char * mystrncpy(char *dest, char *source, int n) {
	while(n) {
		if(*source) {
			*dest++ = *source++;
		} else {
			*dest++ = '\0';
		}
		n--;
	}
	return *dest;
}

char * mystrcat(char *dest, char *source) {
	while(*dest) *dest++;
	while(*source) *dest++ = *source++;
	return *dest;
}


