#includ#include <stdio.h>
#include "main.h"

/**
 * main -print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
e <stdio.h>
#include "main.h"

/**
 * main -print the nameof te program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

/*Declaraing variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - Print each arguments*/
while (count < argc)
{	
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
