# STM32


Blue Pill [Описание](https://stm32-base.org/boards/STM32F103C8T6-Blue-Pill.html) STM32F103C8T6 <br>

[Материалы для работы с IDE](https://disk.yandex.ru/d/ScP8Hb8AdG3v5Q) требуется скачать  <br


- 1_RGB_LED <br>
  - [Для генерации HEX файла](https://microtechnics.ru/community/mikrokontrollery-raznoe/stm32cubeide-hex-fajl/?ysclid=m6uenyvolh723903927) <br> 
  Project -> Properties -> C/C++ Build -> Settings -> Tools Settings -> MCU Post build outputs -> Convert to Intel Hex file (-O ihex) <br>

  - [lb2k](https://www.ozon.ru/product/5sht-xc6219b332mr-lineynyy-regulyator-s-nizkim-urovnem-padeniya-ldo-na-mikrosheme-sot23-lb2k-1809707349/) <br>
  07.02.2025 не удалось провести программирование через ST-LINK V2 (замкнул 3,3В на GND как потом оказалось, 3,3В стало 2,1 В) не удалось подключиться к устройству ST-LINK error (DEV_CONNECT_ERR) Предварительно вышел из строя lb2k <br>


Программирование через Arduino IDE (не проверял) <br>
есть пояснения для чего нужны BOOT0 и BOOT1 <br>
[microsin](https://microsin.net/programming/arm/how-to-program-a-stm32-blue-pill-with-arduino.html?ysclid=m6ubja1u72702263062), 
[deepbluembedded](https://deepbluembedded.com/stm32-arduino-ide-blue-pill-stm32f103c8t6/), 
[community.st.com](
https://community.st.com/t5/stm32-mcus/faq-stm32-boot-process/ta-p/49358)