В Proteus при работе с интерфейсом I2C при установке резисторов "подтяжки" по цепям SDA и SCL адрес устройств не отображается (МК не видит устройств по шине, для Arduino и STM32).
Симуляцию проводить без установки резисторов.

I2C Scanner нашел устройство с адресом 0x20 (в железе, при работе в Proteus найденных адресов нет).


https://github.com/alixahedi/PCF8574-STM32?ysclid=m88el15shs679501460

https://github.com/xreef/PCF8574_library

https://deepbluembedded.com/stm32-i2c-scanner-hal-code-example/


https://robotclass.ru/articles/arduino-i2c-scanner/?ysclid=m7y9j720ia230892807

https://deepbluembedded.com/arduino-i2c-scanner/

https://programmersought.com/article/92956906413/
https://veyselgokdemir.com/2018/02/03/1-how-to-use-hal-library-i2c-functions/


PCF8574 – расширитель портов. Позволяет увеличить количество портов ввода-вывода, связываясь с Ардуино через I2C. Требуется библиотека Adafruit_PCF8574.


https://robotchip.ru/uvelichenie-portov-vvoda-vyvoda-na-arduino-pcf8574/?ysclid=manhpckklk11900940
https://radioparty.ru/prog-avr/program-c/552-lesson-pcf8574?ysclid=maovsjrzoq121360130
https://count-zero.ru/2017/pcf8574/