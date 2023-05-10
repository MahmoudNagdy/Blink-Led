#include "../MCAL/DIO/DIO_Interface.h"
#include <util/delay.h>


int main(void)
{
	DIO_u8SetPortDirection(3, 1);

	while (1)
	{
		DIO_u8SetPortValue(3, 1);
		_delay_ms(50);

		DIO_u8SetPortValue(3, 0);
		_delay_ms(50);
	}
	return 0;
}
