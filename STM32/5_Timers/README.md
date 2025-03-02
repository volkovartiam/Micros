Формулу расчета значения времени задержки и частоты с учетом PSC и ARR забил в Eclipse.

Callback (англ. call — вызов, англ. back — обратный) или фу́нкция обра́тного вы́зова в программировании — передача исполняемого кода в качестве одного из параметров другому коду. Обратный вызов позволяет в функции исполнять код, который задаётся в аргументах при её вызове. 

В Proteus таймер не отрабатывает так как нужно (в железе 0,5 с, в Proteus около 5с (частота 64M))

[wiki.st.com](https://wiki.st.com/stm32mcu/wiki/Getting_started_with_TIM)
Описание базовой настройки таймера.
Указано, что нужно запустить таймер командой:
HAL_TIM_Base_Start_IT(&htim1);
И задать метод (переопределить, где то в настройках он задан как __weak) в классе main.c
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim) 
или как указано в [примере](https://rutube.ru/video/394743c2c455bdee3bfd907ab8d603d3/?ysclid=m7eypfucif575103177)
задать в файле stm32f1xx_it.c нужные команды
в методе void TIM2_IRQHandler(void)
  
Подробное описание параметров таймеров:<br>
[часть 1](https://istarik.ru/blog/stm32/118.html), [часть 2](
https://istarik.ru/blog/stm32/121.html)

Дополнительные ссылки и примеры:<br>
[Доп 1](https://microtechnics.ru/stm32cube-tajmer-i-preryvaniya/?ysclid=m7oxco76t149400314), [Доп 2](https://deepbluembedded.com/stm32-timer-interrupt-hal-example-timer-mode-lab/),
[Доп 3](https://deepbluembedded.com/stm32-timer-calculator/),
[Доп 4](https://narodstream.ru/),
[Доп 5](stm-urok-5-biblioteka-hal-stm32-cube-mx-tajmery/).







