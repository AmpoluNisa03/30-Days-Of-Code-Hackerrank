#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Declare a variable named 'input_string' to hold our input.*/
    char input_string[105]; 
    
    /* Read a full line of input from stdin and save it to our variable, input_string.*/
    scanf("%[^\n]", input_string); 
    
    /* Print a string literal saying "Hello, World." to stdout using printf.*/
    printf("Hello, World.\n");
    
    /* TO DO: Write a line of code here that prints the contents of input_string to stdout.*/
    
    /* Solution starts from here */
    
    printf("%s",input_string);
    
    /* Solution ends here */
    return 0;
}