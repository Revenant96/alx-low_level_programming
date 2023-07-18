#include "main.h"

/**
 * times_table - prints the time table of 9
 */

void times_table(void)
{
	int count, r, timetable;

	for (r = 0; r <= 9; r++)
	{
		for (count = 0; count <= 9; count++)
		{
			timetable = r * count;
			_putchar(timetable);
			if (timetable < 81)
			{
				_putchar(',');
				_putchar(' ');
				if ( count == 9)
				{
					_putchar('\n')
				}
			}
		}
	}
}

