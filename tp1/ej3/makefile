FLAGS = -Wall -Wextra -Werror -std=c99 -g -lm

ej3: ej3.o
	$(CC) -o $@ $^ $(FLAGS)

ej3.o: ej3.c
	$(CC) -c $< $(FLAGS)	

clean:
	rm -f *.o

.PHONY = clean