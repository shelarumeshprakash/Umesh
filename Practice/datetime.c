#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    time_t cur_time;
    char* cur_t_string;
    cur_time = time(NULL);
    if(cur_time == ((time_t)-1))
    {
        (void) fprintf(stderr, "fail");
        exit(EXIT_FAILURE);
    }
    cur_t_string = ctime(&cur_time);
    if(cur_t_string == NULL)
    {
        (void) fprintf(stderr, "fail\n");
        exit(EXIT_FAILURE);
    }
    (void) printf("\n Time is : %s \n",cur_t_string);
    exit(EXIT_SUCCESS);
}