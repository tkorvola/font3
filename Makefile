# For GNU Make.

SOURCES=font3bdf.c font3.c

HEADERS=font3.h

TARGETS = font3bdf font3

OBJECTS = $(SOURCES:.c=.o)
DEPS=$(SOURCES:.c=.d)


.PHONY: all clean distclean

all: $(TARGETS)

clean:
	-rm -f $(TARGETS) $(OBJECTS)

distclean: clean
	-rm -f $(DEPS)

%.d: %.c
	gcc -MM $(CFLAGS) $< > $@

include $(DEPS)
