$(info TEMP=$(TEMP))

NORMALOUT=$(TEMP)/normal
NOSTARTFILESOUT=$(TEMP)/nostartfiles
NODEFAULTLIBSOUT=$(TEMP)/nodefaultlibs
NOLIBCOUT=$(TEMP)/nolibc
NOSTDLIBOUT=$(TEMP)/nostdlib

all: $(NORMALOUT) $(NOSTARTFILESOUT) $(NODEFAULTLIBSOUT) $(NOSTDLIBOUT) # $(NOLIBCOUT)

#
# Prepend execution of gcc with a hyphen so that make continues even
# after gcc -### fails.
#
$(NORMALOUT): prog.o
	-gcc -###                $< 2> $@

$(NOSTARTFILESOUT): prog.o
	-gcc -### -nostartfiles  $< 2> $@

$(NODEFAULTLIBSOUT): prog.o
	-gcc -### -nodefaultlibs $< 2> $@

# TODO:
#   option -nolibc will aparently be available
#   with gcc 8.2.
#
# 
# $(NOLIBCOUT): prog.o
# 	-gcc -### -nolibc        $< 2> $@

$(NOSTDLIBOUT): prog.o
	-gcc -### -nostdlib      $< 2> $@

prog.o: prog.c
	gcc -c $<
