#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

int main(void)
{
	int i = 5;

	if (i == 0)
		return (0);
	if (access("Sully_5.c", R_OK) != -1)
		--i;
	char *str="#define _GNU_SOURCE%1$c#include <stdio.h>%1$c#include <unistd.h>%1$c#include <stdlib.h>%1$c#include <fcntl.h>%1$c#include <string.h>%1$c%1$cint main(void)%1$c{%1$c%2$cint i = %3$d;%1$c%1$c%2$cif (i == 0)%1$c%2$c%2$creturn (0);%1$c%2$cif (access(%4$cSully_5.c%4$c, R_OK) != -1)%1$c%2$c%2$c--i;%1$c%2$cchar *str=%4$c%5$s%4$c;%1$c%2$cchar *name;%1$c%2$cchar *exec;%1$c%2$cchar *compile;%1$c%2$casprintf(&name, %4$cSully_%6$cd.c%4$c, i);%1$c%2$cFILE *fd = fopen(name, %4$cw%4$c);%1$c%2$casprintf(&exec, %4$c./Sully_%6$cd%4$c, i);%1$c%2$casprintf(&compile, %4$cgcc %6$cs -o %6$cs%4$c, name, exec);%1$c%2$cfprintf(fd, str, 10, 9, i, 34, str, 37);%1$c%2$cfclose(fd);%1$c%2$csystem(compile);%1$c%2$csystem(exec);%1$c%1$c%2$creturn (0);%1$c}%1$c";
	char *name;
	char *exec;
	char *compile;
	asprintf(&name, "Sully_%d.c", i);
	FILE *fd = fopen(name, "w");
	asprintf(&exec, "./Sully_%d", i);
	asprintf(&compile, "gcc %s -o %s", name, exec);
	fprintf(fd, str, 10, 9, i, 34, str, 37);
	fclose(fd);
	system(compile);
	system(exec);

	return (0);
}
