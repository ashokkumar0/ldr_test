#include <board.h>
#include <lcd.h>
#include "ldr.h"

int main(void)
{
	board_init();
	lcd_init();
	ldr_init();
	board_stdout(LCD_STDOUT);
	while (1) {
		printf ("ldr: %u\n", ldr_read());
	}
	return 0;
}
