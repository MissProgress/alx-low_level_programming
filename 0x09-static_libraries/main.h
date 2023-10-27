#ifndef _MAIN_H_
#define _MAIN_H_

#include <stddef.h>
int _isupper(int c);
char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
int _isdigit(int c);
int _abs(int c);
int _isalpha(int c);
int _strcmp(char *s1, char *s2);
void _puts(char *str);
int _islower(int c);
char *_strncpy(char *dest, char *src, int n);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strstr(char *haystack, char *needle);
char *_strpbrk(char *s, char *accept);
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
int _putchar(char c);

#endif
