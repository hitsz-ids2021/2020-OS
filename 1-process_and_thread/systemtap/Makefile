
Flag=-Wall
Lib=-pthread
Fork=A B P

all: A B P

A: A.c csapp.h
	gcc -o A A.c $(Flag) $(Lib)

B: B.c csapp.h
	gcc -o B B.c $(Flag) $(Lib)

P: P.c csapp.h
	gcc -o P P.c $(Flag) $(Lib)

clean:
	rm A B P
