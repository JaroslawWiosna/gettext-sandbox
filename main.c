#include<stdio.h>
#include<stdlib.h>
#include<libintl.h>
#include<locale.h>

#define _(STRING) gettext(STRING)

int main() {
	// setlocale(LC_ALL, "");
	putenv("LANG=pl_PL");
	putenv("LANGUAGE=pl_PL");
	putenv("LC_ALL=pl_PL");
	putenv("LC_MESSAGES=pl_PL");
	putenv("LC_CTYPE=pl_PL");
	putenv("LOCPATH=/home/osboxes/github/gettext-sandbox");
	setlocale(LC_MESSAGES, "");
//	setlocale(LC_ALL, "");
	bindtextdomain("main", ".");
	textdomain("main");

	printf("env %s\n", getenv("LANG"));
	printf("env %s\n", getenv("LANGUAGE"));
	printf("TEST: %s\n", _("Hello, world!"));
	printf("TEST: %s\n", _("Bye!"));
	return 0;
}
