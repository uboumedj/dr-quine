#include <stdio.h>
#include <fcntl.h>

/* Comment */
#define STRING char *str="#include <stdio.h>%1$c#include <fcntl.h>%1$c%1$c/* Comment */%1$c#define STRING char *str=%2$c%3$s%2$c%1$c#define PRINTF_PARAMS fd, str, 10, 34, str%1$c#define GRACE_PROGRAM int main(void){STRING; FILE *fd = fopen(%2$cGrace_kid.c%2$c, %2$cw%2$c); fprintf(PRINTF_PARAMS); fclose(fd);}%1$c%1$cGRACE_PROGRAM%1$c"
#define PRINTF_PARAMS fd, str, 10, 34, str
#define GRACE_PROGRAM int main(void){STRING; FILE *fd = fopen("Grace_kid.c", "w"); fprintf(PRINTF_PARAMS); fclose(fd);}

GRACE_PROGRAM
