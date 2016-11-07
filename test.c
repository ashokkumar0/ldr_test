#include <board.h>
#include <lcd.h>
#include "ldr.h"

int main(void)
{
	uint32_t val;
	board_init();
	lcd_init();
	ldr_init();
	board_stdout(LCD_STDOUT);
	while (1) {
		val = ldr_read();
		printf ("ldr: %d\n", val);
	}
	return 0;
}
