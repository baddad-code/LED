#include <LED.h>                      // Подключаю библиотеку

constexpr uint8_t LED_PIN = 8;        // Создаю константу для хранения пина светодиода
constexpr uint16_t blinkDelay = 1000; // Создаю константу для хранения периода мигания светодиода

LED myLed(LED_PIN);                   // Создаю объект, в котрый передаю константу с переменной светодиодом

void setup() {}

void loop() {
  myLed.ledBlink(blinkDelay);         // Обращаюсь в функции мигания и передаю два параметра время свечения и время на протяжении которого светодиод выключен
}
