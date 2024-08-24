#include "LED.h"

LED::LED(uint8_t pin){
  _pin = pin;
  pinMode(_pin, OUTPUT);
}

void LED::turnOn() {
  digitalWrite(_pin, HIGH);
}

void LED::turnOff() {
  digitalWrite(_pin, LOW);
}

void LED::ledSet(bool state) {
  _state = state;
  _state = !digitalRead(_pin);
  digitalWrite(_pin, _state);
}

void LED::ledBrightness(uint8_t value) {
  _value = value;
  analogWrite(_pin, _value);
}

void LED::ledToogle(uint32_t timeOn, uint32_t timeOff) {
  _timeOn = timeOn;
  _timeOff = timeOff;
  if (_state) _period = _timeOn;
  else _period = _timeOff;
  
  if (millis() - _tmr >= _period) {
    _tmr = millis();
    digitalWrite(_pin, !digitalRead(_pin));
    _state = !_state;
  }
}

void LED::ledBlink(uint32_t switchTime){
  _switchTime = switchTime;
  if(millis() - _tmr >= _switchTime){
    _tmr = millis();
    digitalWrite(_pin, !digitalRead(_pin));
  }
}