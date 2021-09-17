//program  for multiplication table

#include<stdio.h>
void main()
{
    int tableNumber;
    int tableCounter, rowCounter;
    printf ("How many  multiplication tables do you want?");
    scanf ("%d",&tableNumber);
    for(tableCounter = 1; tableCounter <= tableNumber; tableCounter = tableCounter + 1)
    { 
      for ( rowCounter = 1; rowCounter <= 20; rowCounter = rowCounter + 1)
      {
          printf ("%d X %d = %d \n", tableCounter, rowCounter, tableCounter * rowCounter);
      }
    }
  }
