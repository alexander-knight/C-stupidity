#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
 int startpop;
 int debugswitch;
  do
  {
      startpop = get_int("Start size (minimum 9): ");
  }
  while (startpop < 1);
    // TODO: Prompt for end size
 int endpop;
  do
  {
      endpop = get_int("End size (must be higher than start size): ");
  }
  while (endpop < 1);


    // TODO: Calculate number of years until we reach threshold
int years = 0;
int pop = startpop;
  do
  {
    int growth = pop / 3;
    int death = pop / 4;

    pop = pop + growth - death;

    years++;
    //Debug info
    //printf("Years: %i \n", years);
    //printf("Growth:%i ", growth);
    //printf("Death:%i ", death);
    //printf("Pop: %i ", pop);
  }
  while (pop < endpop);
    // TODO: Print number of years
  printf("Years: %i", years);


}
