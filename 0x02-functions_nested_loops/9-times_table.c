Task 9.txt

Who has access

A

System properties

Type

Text

Size

455 bytes

Storage used

455 bytes

Location

0x02. C - Functions, nested loops

Owner

Antony Bahati

Modified

13 Sept 2022 by Antony Bahati

Opened

13:13 by me

Created

13 Sept 2022

No description

Viewers can download

#include "main.h"



/**

 *times_table - Prints the 9 times table, starting with 0.

 */

void times_table(void)

{

	int num, mult, prod;



	for (num = 0; num <= 9; num++)

	{

		_putchar('0');



		for (mult = 1; mult <= 9; mult++)

		{

			_putchar(',');

			_putchar(' ');



			prod = num * mult;



			if (prod <= 9)

				_putchar(' ');

			else

				_putchar((prod / 10) + '0');



			_putchar((prod % 10) + '0');

		}

		_putchar('\n');

	}

}
