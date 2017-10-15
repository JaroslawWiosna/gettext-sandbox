#include<stdio.h>
#include<stdlib.h>
#include<libintl.h>
#include<locale.h>

#define _(STRING) gettext(STRING)

int main() {
	setlocale(LC_ALL, "");
	bindtextdomain("main", getenv("PWD"));
	textdomain("main");

	printf("TEST: %s\n", _("Hello, world!"));
	printf("TEST: %s\n", _("Bye!"));
	return 0;
}
