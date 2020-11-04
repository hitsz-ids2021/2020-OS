
Flag=-Wall
Lib=-pthread
Fork=fork1 fork2 fork3 fork4 fork5
DIR=out
all: cpu $(Fork) wait1 wait2  waitpid p4 execve mysystem 

cpu: cpu.c common.h
	gcc -o $(DIR)/cpu cpu.c $(Flag) $(Lib)

fork1: fork1.c csapp.h
	gcc -o $(DIR)/fork1 fork1.c $(Flag) $(Lib) 

fork2: fork2.c csapp.h
	gcc -o $(DIR)/fork2 fork2.c $(Flag) $(Lib) 

fork3: fork3.c csapp.h
	gcc -o $(DIR)/fork3 fork3.c $(Flag) $(Lib) 

fork4: fork4.c csapp.h
	gcc -o $(DIR)/fork4 fork4.c $(Flag) $(Lib) 

fork5: fork5.c csapp.h
	gcc -o $(DIR)/fork5 fork5.c $(Flag) $(Lib)

p4: p4.c
	gcc -o p4 p4.c $(Flag) $(Lib)

wait1: wait1.c csapp.h
	gcc -o $(DIR)/wait1 wait1.c $(Flag) $(Lib)

wait2: wait2.c csapp.h
	gcc -o $(DIR)/wait2 wait2.c $(Flag) $(Lib) 

waitpid: waitpid.c csapp.h
	gcc -o $(DIR)/waitpid waitpid.c $(Flag) $(Lib) 

execve: execve.c csapp.h
	gcc -o $(DIR)/execve execve.c $(Flag) $(Lib) 

mysystem: mysystem.c csapp.h
	gcc -o $(DIR)/mysystem mysystem.c $(Flag) $(Lib)

clean:
	rm $(DIR)/* p4 p4.output
