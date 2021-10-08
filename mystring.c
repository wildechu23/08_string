#include <stdio.h>
#include <stdlib.h>

//int main() {
//	char *hi = "hi";
//	char empty[5];
//	char empty2[20];
//	char *you = " you\0 guys";
//	char *guys = " guys";
//	mystrncpy(empty2, hi, 2);
//	printf("strlen: %d\n", mystrlen(hi));
//	printf("strncpy: %s\n", mystrncpy(empty, you, 5));
//	printf("strcat: %s\n", mystrcat(empty2, guys));
//	printf("strcmp: %d\n", mystrcmp("hi", hi));
//	printf("strcmp: %d\n", mystrcmp("hh", hi));
//	printf("strcmp: %d\n", mystrcmp("hj", hi));
//	printf("strchr: %p\n", mystrchr(guys, 'u'));

//	return 0;
//}

int mystrlen(char *s) {
	int len = 0;
	while(*s) {
		len++;
		*s++;
	}
	return len;
}

char * mystrncpy(char *dest, char *source, int n) {
	char *start = dest;
	while(n) {
		if(*source) *dest = *source;
		else *dest = '\0';
		*dest++;
		*source++;
		n--;
	}
	dest = start;
	return dest;
}

char * mystrcat(char *dest, char *source) {
	// printf("%s, %s\n", dest, source);
	char *start = dest;
	//printf("%d", mystrlen(dest));
	while(*dest) *dest++;
	while(*source) {
		*dest++ = *source++;
	}
	return start;
}

int mystrcmp(char *s1, char *s2) {
	while(*s1) {
		if(*s1 > *s2) {
			return 1;
		} else if(*s1 < *s2) {
			return -1;
		}
		*s1++;
		*s2++;
	}
	if(*s2) return -1;
	else return 0;
}

char * mystrchr(char *s, char c) {
	while(*s) {
		if(*s == c) return s;
		*s++;
	}
	if(c == 0) {
		return s;
	}
}
