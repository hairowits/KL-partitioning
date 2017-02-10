#include <stdio.h>

int main(int argc, char *argv[])
  int No_Cell, No_Net;
  if((FILE *input = fopen(argv, "r") == NULL)) {
    printf("File not exist");
    return 1;}
  int
