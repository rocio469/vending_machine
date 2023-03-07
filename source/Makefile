GCC=gcc
MAKE=make

OUTPUTDIR=$(CURDIR)/..
OUTPUTAPP= $(OUTPUTDIR)/app.bin

SOURCES = tipos.c \

INCLUDES = -I ../inc

CFLAGS = -Wall $(INCLUDES)


all:
	gcc $(SOURCES) $(CFLAGS) -lm -o $(OUTPUTAPP)

run: all
	$(OUTPUTAPP)
clean:
	rm -f $(OUTPUTAPP)

