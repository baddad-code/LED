#include<LED.h>                     // Подключаю бибилотеку для работы со светодиодом

constexpr uint8_t LED_PIN = 9;      // Создаю константу для хранения пина светодиода

LED myLed(LED_PIN);                 // Создаю объект, в котрый передаю константу с переменной светодиодом

void setup() {}

void loop() {
  for (int i = 0; i <= 255; i++) {  // Создаю цикл от 0 до 255 с шагом в единицу ...
    myLed.ledBrightness(i);         // ... передаю текущее значение цикла светодиоду ...
    delay(5);                       // ... ставлю небольшую задержку для плавной работы светодиода 
  }

  for (int i = 255; i >= 0; i--) {  // Создаю цикл от 255 до 0 с шагом в единицу ...
    myLed.ledBrightness(i);         // ... передаю текущее значение цикла светодиоду ...
    delay(5);                       // .. ставлю небольшую задержку для плавной работы светодиода
  }
}
