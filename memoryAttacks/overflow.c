#include<stdio.h>
#include<string.h>

int attack1(char buffer[10], char *input)
{
  strcpy(buffer, input);
  return -1; 
}

int attack2(char *in1, char *in2, unsigned int l1, unsigned int l2)
{
	char concatstring[256];
	if((l1+l2) > 256)
	return -1;
	memcpy(concatstring, in1, l1);
	memcpy(concatstring+l1, in2, l2);
	return 0;
}
void main()
{
  char buffer[10], input[20], in1[150], in2[150];
  int ret1, ret2;
  printf("\nEnter the string to be stored : ");
  gets(input);
  ret1 = attack1(buffer, input);
  printf("\nReturned %d", ret1);
  unsigned int l1, l2;
  printf("\nEnter a string whose length is less than 128: ");
  gets(in1);
  printf("\nEnter a string whose length is less than 128: ");
  gets(in2);
  printf("\nEnter the lengths of the 2 strings whose sum should be less than 256 (in hex): ");
  scanf("%x %x", &l1, &l2);
  ret2 = attack2(in1, in2, l1, l2);
  printf("\nReturned %d", ret2);
}
