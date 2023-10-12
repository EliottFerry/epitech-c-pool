#ifndef DAY_08_H_
#define DAY_08_H_

#include <sys/ioctl.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <unistd.h>

char **str_to_word_array(char const *str, char const *separators);

#endif /* DAY_08_H_ */