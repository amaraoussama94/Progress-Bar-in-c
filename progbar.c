#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h> 

const int PROG_BAR_LENGTH =30 ;//30 caractere

void update_bar(int percent_done)
{
    const int PROG_BAR_LENGTH =30 ;//30 caractere
    int num_car = percent_done * PROG_BAR_LENGTH  / 100 ;//number  of caractere to print 
    printf("[");
    for(int i =0;i<num_car;i++)
    {
        printf("#");
    }
    for(int i =0;i<(PROG_BAR_LENGTH -num_car);i++) //unfinish part of  progress bar 
    {
        printf(" ");
    }
    printf("] %d%% Done\n",percent_done);
}
int main()
{

    for(int i= 0;i<100;i++)
    {
        update_bar(i);
        usleep(20000);//sleep for 20ms
    }
    return 0;
}


