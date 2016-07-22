#include "led.h"

#include <stdint.h>
#include <stdbool.h>
#include "inc/hw_memmap.h"
#include "driverlib/gpio.h"

void led_turn_on(void)
{
  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, GPIO_PIN_2);
}

void led_turn_off(void)
{
  GPIOPinWrite(GPIO_PORTF_BASE, GPIO_PIN_2, 0);
}
