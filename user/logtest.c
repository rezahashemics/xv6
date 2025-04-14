#include "kernel/types.h"
#include "user/user.h"

int main() {
  log_message(0, "This is an info message from user program");
  log_message(1, "This is a warning message from user program");
  log_message(2, "This is an error message from user program");
  exit(0);
}