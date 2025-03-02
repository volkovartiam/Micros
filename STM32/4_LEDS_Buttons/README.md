Регистры GPIO:
- MODEy[1:0]: Режим ножки порта, вход или выход;<br>
- CNFy[1:0]: Конфигурация режима;<br>
- IDRy: в этих битах содержится входное значение соответствующего порта ввода-вывода;<br>
- ODRy: выходные данные порта;<br>
- BRy: Сбросить бит у регистра ODR порта ввода-вывода;<br>
- BSy: Установить бит у регистра ODR порта ввода-вывода;<br>
- LCKK[16]: Ключ блокировки;<br>
- LCKy: Эти биты могут быть прочитаны и записаны, но запись можно произвести только если бит LCKK равен нулю. <br> <br>


Полезные ссылки: [dimoon](https://dimoon.ru/obuchalka/stm32f1/programmirovanie-stm32-chast-5-portyi-vvoda-vyivoda-gpio.html), [mcucpu](https://mcucpu.ru/index.php/stm32/82-stm32gpio), [easyelectronics](https://we.easyelectronics.ru/STM32/prakticheskiy-kurs-stm32-urok-1---gpio-porty-vvoda-vyvoda.html). <br>
