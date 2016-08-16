#include<stdio.h>
#include<string.h>

int attack(char buffer[10], char *input)
{
  strcpy(buffer, input);
  return -1; 
}

void main()
{
  char buffer[10], input[20];
  int ret;
  printf("\nEnter the string to be stored : ");
  scanf("%s",input);
  ret = attack(buffer, input);
  printf("\n%d", ret);
}
