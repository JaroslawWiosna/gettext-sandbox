CFLAGS = -Wall -Wextra -std=c99 -g
CPPFLAGS = -I.
LDFLAGS =

EXEC = main

all: $(EXEC) $(EXEC).mo

$(EXEC): $(EXEC).c 
	gcc main.c -o main

$(EXEC).mo: $(EXEC).po
	msgfmt --output-file=$@ $<

$(EXEC).po: $(EXEC).pot
	msgmerge --update $@ $<

$(EXEC).pot: $(EXEC).c
	xgettext -k_ -j -lC -c -s -o main.pot main.c

#clean:
#    @rm -f $(EXEC) po/fr/*.mo *~

.PHONY: clean
