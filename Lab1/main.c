#include "uart_stdio.h"
#include <avr/delay.h>

int count = 0;

void main(void) {
	uart_stdio_Init();

	while(1) {
		_delay_ms(1000);
		count = count + 1;
		printf("%d\n", count);
	}
	
	
}
