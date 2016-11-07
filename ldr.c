#include <stdint.h>
#include <adc.h>

void ldr_init(void)
{
	adc_init(); 
}
uint8_t ldr_read (void)
{
	return adc_read8(0);	
}
