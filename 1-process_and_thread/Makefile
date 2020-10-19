
Flag=-Wall
Lib=-pthread
Fork=fork1 fork2 fork3 fork4 fork5

all: cpu $(Fork) wait1 wait2  waitpid p4 execve 

cpu: cpu.c common.h
	gcc -o cpu cpu.c $(Flag) $(Lib)

fork1: fork1.c csapp.h
	gcc -o fork1 fork1.c $(Flag) $(Lib) 

fork2: fork2.c csapp.h
	gcc -o fork2 fork2.c $(Flag) $(Lib) 

fork3: fork3.c csapp.h
	gcc -o fork3 fork3.c $(Flag) $(Lib) 

fork4: fork4.c csapp.h
	gcc -o fork4 fork4.c $(Flag) $(Lib) 

fork5: fork5.c csapp.h
	gcc -o fork5 fork5.c $(Flag) $(Lib)

p4: p4.c
	gcc -o p4 p4.c $(Flag)

wait1: wait1.c csapp.h
	gcc -o wait1 wait1.c $(Flag) $(Lib)

wait2: wait2.c csapp.h
	gcc -o wait2 wait2.c $(Flag) $(Lib) 

waitpid: waitpid.c csapp.h
	gcc -o waitpid waitpid.c $(Flag) $(Lib) 

execve: execve.c csapp.h
	gcc -o execve execve.c $(Flag) $(Lib) 

clean:
	rm cpu $(Fork) p4 wait1 wait2 waitpid execve
