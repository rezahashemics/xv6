#include "types.h"
#include "riscv.h"
#include "defs.h"
#include "custom_logger.h"

log_level_t current_log_level = LOG_LEVEL_INFO;

void set_log_level(log_level_t level) {
  current_log_level = level;
}
log_level_t get_log_level(void) {
  return current_log_level;
}

void log_info(const char *msg) {
  if (current_log_level <= LOG_LEVEL_INFO)
    printf("[INFO] %s\n", msg);
}
void log_warn(const char *msg) {
  if (current_log_level <= LOG_LEVEL_WARN)
    printf("[WARN] %s\n", msg);
}
void log_error(const char *msg) {
  if (current_log_level <= LOG_LEVEL_ERROR)
    printf("[ERROR] %s\n", msg);
}

void log_message(int level, const char *message) {
  switch (level) {
    case 0:
      log_info(message);
      break;
    case 1:
      log_warn(message);
      break;
    case 2:
      log_error(message);
      break;
    default:
      printf("[UNKNOWN] %s\n", message);
  }
}