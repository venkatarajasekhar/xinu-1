CFLAGS=-O2 -lm -g -fopenmp -pthread

INCLUDE=-Incurses/include

LDFLAGS=-Lncurses/lib -lncurses -ldl 

OBJS=main.o matmult.o

CC=cc

all: main

main: ${OBJS}
	$(CC) ${OBJS} $(INCLUDE) $(CFLAGS) $(LDFLAGS) -o main

clean:
	rm -f *.o main

distclean:
	rm -f main *.o result.txt

#inference for all .c files not listed above...
%.o : %.c
	$(CC) $(CFLAGS) $(INCLUDE) $(LDFLAGS) -c -o $@ $^
	
