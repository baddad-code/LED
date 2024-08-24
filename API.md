# LED API

## `class LED(uint8_t pin)`
Create an object of class `LED` to work with LED.
The LED will be driven by the voltage applied to the Arduino pin to which the LED is connected.
- `pin`: pin number to which the LED is connected.

### `turnOn()`
Turns on the LED.

### `turnOff()`
Turns off the LED.

### `ledSet(bool state)`
Inverts the current state of the LED.

### `ledBrightness(uint8_t value)`
Sets the brightness of the glow. The available range of brightness values is from `0` to `255`.

### `ledToogle(uint32_t timeOn, uint32_t timeOff)`
A function of the `LED` object that allows you to blink the LED with different period.
- `timeOn`: the time for which the LED will be on.
- `timeOff`: time during which the LED will be off.

### `ledBlink(uint32_t switchTime)`
A function of the `LED` object that allows the LED to blink with the same period.
