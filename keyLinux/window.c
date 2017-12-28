#include<time.h>
#include<ncurses.h>

void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
 
    // Stroing start time
    clock_t start_time = clock();
 
    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds)
        ;
}

int main()
{
	int i=1;
        initscr();	/* Start curses mode 		  */
	while(i<60)
	{
		printw("%2d ",i);	/* Print Hello World		  */
		i++;
		delay(1000);		/* wait for one second 		  */
		refresh();		/* Print it on to the real screen */
	}
	getch();	/* Wait for user input */
	endwin();	/* End curses mode		  */

	return 0;
}
