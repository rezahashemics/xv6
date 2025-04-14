typedef enum {
  LOG_LEVEL_INFO = 0,
  LOG_LEVEL_WARN,
  LOG_LEVEL_ERROR
} log_level_t;

extern log_level_t current_log_level;

void set_log_level(log_level_t level);
log_level_t get_log_level(void);

void log_info(const char *msg);
void log_warn(const char *msg);
void log_error(const char *msg);