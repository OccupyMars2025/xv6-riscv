
// ex4.c: replace a process with an executable file

#include "kernel/types.h"
#include "user/user.h"

int
main()
{
  // argv[0] is the name of the executable 
  char *argv[] = { "echo", "this", "is", "echo,", " hello!", 0 };

  exec("echo", argv);

  printf("exec failed!\n");

  exit(0);
}