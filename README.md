# Factorial Calculator Using C Programming Language

### Question
### Write a program to find the factorial value of any number entered through the keyboard.

## Features

- Supports large numbers to be factorialized, above 22!
- Tested upto 1754! and works well on both 32 and 64 bit computers.

## Algorithm:
```c
   int i;
   double fact = 1;
   for(; i >= 1; --i) {
       fact *= i;
   }
   printf("%.9g", fact);
```
#### For full code functionality, see factorial.c


## Usage
### You can clone or download the repo, Once you have the file "factorial.c", You just need to compile and run it.
#### Compile 
```
$ gcc factorial.c -o factorial

```
#### Run on Linux
``` 
$ ./factorial
```
#### Run on Windows
```
$ .\factorial.exe
```
#### Feel free to raise issues if you find some errors or want to clear your doubts...

#### #factorial calculator #c project #mini project #factorial

### Contact me on <a href="https://t.me/Anonymous_M21"> Telegram </a>

