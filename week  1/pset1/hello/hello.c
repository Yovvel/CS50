#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // asks the user for its name, so it then can greet the user
    string name = get_string("What is your name?\n");
    printf("Hello, %s\n", name);
}
