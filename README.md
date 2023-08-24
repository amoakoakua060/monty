# Stacks, Queues - LIFO, FIFO
Create an interpreter for Monty ByteCodes files

## Coding style
The code is compliant to Betty style (betty-style.pl and betty-doc.pl)

## Features
- Switching between Stack and Queus
- Interpreting Monty codes from .m files

## How to Use
Compilation
```
$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
```
Use
```
$ cat -e 000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
$ ./monty 000.m
3
2
1
0
6
5
4
3
2
1
0
```

## Contributors
Achiaa Akua (akuamoako11@gmail.com)
