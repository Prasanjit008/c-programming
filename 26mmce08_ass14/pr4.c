/*Dynamically allocate memory for a first name, then use realloc() for the full name. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char *name;
    size_t capacity = 20;

    name = (char *)malloc(capacity * sizeof(char));
    if (name == NULL)
    {
        printf("Memory allocation failed!\n");
        exit (0);
    }

    printf("Enter your first name: ");
    if (fgets(name, (int)capacity, stdin) == NULL)
    {
        free(name);
       exit (0);
    }
    name[strcspn(name, "\n")] = '\0';
    printf("Your first name is: %s\n", name);

    printf("Enter your full name: ");
    /* Read a complete line into a temporary buffer, then resize name. */
    char input[200];
    if (fgets(input, sizeof(input), stdin) == NULL)
    {
        free(name);
        exit (0);
    }
    input[strcspn(input, "\n")] = '\0';

    char *temp = (char *)realloc(name, (strlen(input) + 1) * sizeof(char));
    if (temp == NULL)
    {
        printf("Memory reallocation failed!\n");
        free(name);
        exit (0);
    }
    name = temp;
    strcpy(name, input);

    printf("Your full name is: %s\n", name);

    free(name);
    
}
