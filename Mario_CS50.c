// Draws a pyramid using recursion

#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main()
{
    // Get height of pyramid
    int h
    do{
    int h = get_int("Height: ");
    }
    while (h<1 || h> 9);

    // Draw pyramid
    draw(height);

}

void draw(int n)
{
    // If nothing to draw
    if (n <= 0)
    {
        return;
    }

    // Draw pyramid of height n - 1
    draw(n - 1);

    // Draw one more row of width n
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}
