#include <avr/io.h>
#include <util/delay.h>
#include <avr/pgmspace.h>

#define LED_DDR DDRK
#define LED_PORT PORTK
#define BUTTON_DDR DDRA
#define BUTTON_PORT PORTA
#define BUTTON_PIN PINA
#define BUTTON_PIN_NUMBER 0
#define LED_QUANTITY 8
#define DELAY_IN_MS 1050

const unsigned char PROGMEM ALGORITHM[8] = { 1 << 7, 1 << 5, 1 << 3, 1 << 1, 1 << 6, 1 << 4, 1 << 2, 1 << 0 };

void init() {
  LED_DDR = 0xFF;
  LED_PORT = 0x00;

  BUTTON_DDR = 0x00;
  BUTTON_PORT = 1 << BUTTON_PIN_NUMBER;
}

int main(void) {
  init();
  while (1) {

    if (!(BUTTON_PIN & 1 << BUTTON_PIN_NUMBER)) {
      for (int i = 0; i < LED_QUANTITY; i++) {
        LED_PORT = pgm_read_byte(&ALGORITHM[i]);
        _delay_ms(DELAY_IN_MS);
      }
      LED_PORT = 0x00;
    }

  }
}