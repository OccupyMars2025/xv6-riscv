#include "kernel/types.h"
#include "user/user.h"

// ex5.c: fork then exec
/* 
$ ex5
parent waitiTHnIgS
 IS ECHO
the child(pid=8) exited with status 0

*/

int
main()
{
  int pid, status;

  pid = fork();
  if(pid == 0){
    char *argv[] = { "echo", "THIS", "IS", "ECHO", 0 };
    exec("echo", argv);
    printf("exec failed!\n");
    exit(1);
  } else {
    printf("parent waiting\n");
    wait(&status);
    printf("the child(pid=%d) exited with status %d\n", pid, status);
  }

  exit(0);
}