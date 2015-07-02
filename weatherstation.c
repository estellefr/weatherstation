#include <stdio.h>
#include "RPI.h"

int main()
{
	printf("Hello Pi!\n");

	if(map_peripheral(&gpio) == -1)
	{
		printf("Failed to map the physical GPIO registers\n");
		return -1;
	}

	// Define pin 11 as output
	INP_GPIO(17);
	OUT_GPIO(17);

	while(1)
	{
		// Toggle pin 11 to blink the LED
		GPIO_SET = 1 << 17;
		sleep(1);

		GPIO_CLR = 1 << 17;
		sleep(1);
	}
	return 0;
}
