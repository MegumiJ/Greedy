/*********************************************
 * greedy.c
 *
 * Megumi Jinushi
 * megumij@hawaii.edu
 *
 * asks how much change is owed and
 * spits out the minimum number of coins check50 2014/x/pset1/greedy greedy.c
 **********************************************/
# include <stdio.h>
# include <cs50.h>
# include <math.h> // math has round(x) 

int main (void)
{

    // function
    float roundf(float x);
      
    // prompt user for an amount of change

    printf("O hai! How much change is owed?\n");
    float change = 0;
    change = GetFloat();
    
    while (change < 0)
    { 
        // get a valid floating number
        printf("How much change is owed?\n");
        change = GetFloat();
    }       
    
    // convert to cents *100
    change = change * 100;
    int cent = roundf(change);

    // always use the largest coin possible
    int count = 0;
    
    while (cent >= 25)
    {
        cent = cent - 25;
        count = count + 1;
    }
    
    while (cent >= 10)
    {
        cent = cent - 10;
        count = count + 1;
    }
    
    while (cent >= 5)
    {
        cent = cent - 5;
        count = count + 1;
    }
    
    while (cent >= 1)
    {
        cent = cent - 1;
        count = count + 1;
    }

// print the # of coins used
    printf("%d\n", count);
}
