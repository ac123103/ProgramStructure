#include <stdio.h>
#include <stdlib.h>

#define MAX 100
#define MIN 55

// Prototypes:
int addthree(int);
void showMessage();
void checkRange(int);

int main()
{

    // This is a comment.
    checkRange(200);

    return 0;
}

int addthree(int x)
{
    return x + 3;
}

void showMessage()
{
    printf("Value out of range.\n");

}
 void checkRange(int enteredValue)
{



 if (enteredValue > MAX || enteredValue < MIN)
        {
            showMessage();
        }

}
