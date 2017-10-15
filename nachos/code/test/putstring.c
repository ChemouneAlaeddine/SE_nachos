#include "syscall.h"

void print()
{
  PutString("bonjour\n");
}

int main()
{
  print();
  Halt();
}
