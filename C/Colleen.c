#include <stdio.h>

void auto_print(char *str)
{
	printf(str,10,9,34,str);
}

int main(void)
{
	/*
		Inner comment
	*/
	char *str="#include <stdio.h>%1$c%1$cvoid auto_print(char *str)%1$c{%1$c%2$cprintf(str,10,9,34,str);%1$c}%1$c%1$cint main(void)%1$c{%1$c%2$c/*%1$c%2$c%2$cInner comment%1$c%2$c*/%1$c%2$cchar *str=%3$c%4$s%3$c;%1$c%2$cauto_print(str);%1$c}%1$c/*%1$c%2$cOuter comment%1$c*/%1$c";
	auto_print(str);
}
/*
	Outer comment
*/
