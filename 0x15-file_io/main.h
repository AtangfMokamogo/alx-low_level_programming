#ifndef main_h
#define main_h

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t rea_textfile(const char *filename, size_t letters);

#endif
