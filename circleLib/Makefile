all: libCircle.a circledemo.elf

CPU             = msp430g2553
CFLAGS          = -mmcu=${CPU} -Os -I../h

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-as
AR              = msp430-elf-ar

<<<<<<< HEAD
abCircle_decls.h abCircle.h chordVec.h libCircle.a: makeCircles.c abCircle.o  _abCircle.h Makefile 
=======
abCircle.h chordVec.h libCircle.a: makeCircles.c abCircle.o  _abCircle.h Makefile
>>>>>>> 55c2de4f35b28a40060637346c087af332b0e698
	cc -o makeCircles makeCircles.c
	rm -rf circles; mkdir circles
	./makeCircles
	cat _abCircle.h abCircle_decls.h > abCircle.h
	(cd circles; $(CC) -I.. -I../../h -mmcu=${CPU} -Os -c *.c)
	$(AR) crs libCircle.a circles/*.o abCircle.o

abCircle.o: _abCircle.h abCircle.c 

install: libCircle.a abCircle.h chordVec.h
	mkdir -p ../h ../lib
	cp libCircle.a ../lib
	cp abCircle.h chordVec.h ../h


clean:
<<<<<<< HEAD
	rm -f libCircle.a abCircle.h abCircle_decls.h chordVec.h *.o *.elf makeCircles
=======
	rm -f libCircle.a abCircle.h chordVec.h *.o *.elf makeCircles
>>>>>>> 55c2de4f35b28a40060637346c087af332b0e698
	rm -rf circles

circledemo.elf: circledemo.o libCircle.a
	$(CC) $(CFLAGS) $^ -L../lib -lLcd -lTimer -lShape -o $@


load: circledemo.elf
	mspdebug rf2500 "prog $^"




