#ifndef TBULOG_H
#define TBULOG_H

#ifdef __cplusplus
extern "C" {
#endif

int open_log(const char *path);
int add_log(const char *format, ...);
int close_log();

#ifdef __cplusplus
}
#endif

#endif
