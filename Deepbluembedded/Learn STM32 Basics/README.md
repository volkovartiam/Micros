# Learn STM32 Basics

[Сайт](https://deepbluembedded.com/stm32-ecosystem-development-environment-setup/)
авторства Khaled Magdy <br> 
и его [git](https://github.com/Khaled-Magdy-DeepBlue/STM32_Course_DeepBlue/tree/master) <br>


- 1 Setting UP STM32 Toolchain
STM32CUBE IDE, STM32 CubeMX, ST-Link V2 Driver<br>
- 2 Getting started with STM32
Краткое описание серии микроконтроллеров
- 3 STM32 HAL Library<br>
HAL (Hardware Abstraction Layer)
- 4 GPIO Tutorial
- 5 GPIO Output   
Мигание светодиодом 
- 6 GPIO Input<br> 
Мигание светодиодом по нажатию кнопки<br> 
- 7 RCC (Reset&Clock) 
Виды сброса (System, Power, Backup Domain) <br> 
Clock Source (HSI, HSE, LSE, LSI, CSI, HSI, PLL clock) <br> 
Clock Tree <br>
- 8 DWT Delay <br> 
DWT (Data Watchpoint Trigger) Example <br>
Добавление сторонней библиотеки в проект, для микросекундной и милисикундной задержки <br>
- 9 SysTick Delay <br> 
Добавление сторонней библиотеки в проект, для микросекундной и милисикундной задержки <br>
- 10 Debugging With ST-Link <br>
Про Debug в среде STM32CUBE (<span style="color:red"> вернуться</span> после получения платы Nucleo)<br>
- 11 Interrupts Tutorial | NVIC & EXTI <br>
    - 1 Exceptions / Interrupts <br>
    - 2 Interrupts Tail-Chaining SpeedUp <br>
    - 3 Interrupt Late Arrival SpeedUp <br>
    - 4 Pre-Emption <br>
    - 5 Interrupt Vector Table <br>
    - 6 Interrupt Stacking, ISR, Return <br>
    - 7 Exceptions Priorities Overview <br>
    - 8 Interrupts Priority & Priority Grouping <br>
    - 9  EXTI (External Interrupts) Controller <br>
    Resources & References <br>
- 12 External Interrupt Example <br>
Пример внешнего прерывания по нажатию кнопки, <span style="color:red"> вернуться</span> после разбора микроконтроллеров Atmega, Attiny.
- 13 Timers<br>
    - 1 Introduction To Timers Modules <br> 
    - 2 Timers Hardware <br> 
    - 3 Timers Modes OF Operation <br> 
    - 4 Timer Mode <br> 
<span style="color:red"> вернуться к работе с таймерами после ознакомления с серией AVR, также неплохо было бы заиметь генератор сигналов и осциллограф</span>
- 14 Timer Interrupt HAL Example<br>
Мигание светодиодом через определенные промежутки времени, 
<span style="color:red">написать скрипт для расчета частоты/времени задержки (GoogleColab, Java)</span> <br>
- 15 Counter Mode Example<br>
Пример работы таймера в режиме счетчика (при нажатии кнопки счетчик запускался и сразу отсчитывал до установленного значения, для корректной работы требуется генератор сигналов/импульсов)<br>
- 16 Input Capture Mode<br>
Для работы требуется осциллограф и генератор ШИМ-сигналов, <span style="color:red"> возможно стоит построить модель в Proteus </span>
- 17 Timer Encoder Mode<br>
Для работы требуется осциллограф и генератор ШИМ-сигналов, <span style="color:red"> возможно стоит построить модель в Proteus </span>, <span style="color:red"> вернуться к работе с таймерами после ознакомления с серией AVR</span> <br>
- 18 PWM Output 
Плавное мигание светодиодом, требуется осциллограф, <span style="color:red">написать скрипт для расчета частоты/времени задержки (GoogleColab, Java)</span> <br>
- 19 PWM Frequency & Resolution Configuration <br>
Расширенное объяснение урока 18 PWM Output <br>
- 20 PWM Input Mode
Для работы требуется осциллограф и генератор ШИМ-сигналов, <span style="color:red"> возможно стоит построить модель в Proteus </span>, <span style="color:red"> вернуться к работе с таймерами после ознакомления с серией AVR</span> <br>
- 21 Complementary PWM & Dead-Time <br>
Расширенное объяснение урока 20 PWM Input Mode <br>
- 22 Phase PWM (Center-Aligned) <br>
Для работы требуется осциллограф и генератор ШИМ-сигналов, <span style="color:red"> возможно стоит построить модель в Proteus </span>, <span style="color:red"> вернуться к работе с таймерами после ознакомления с серией AVR</span> <br>
- 23 Phase PWM (Edge-Aligned PWM) <br>
Для работы требуется осциллограф и генератор ШИМ-сигналов, <span style="color:red"> возможно стоит построить модель в Proteus </span>, <span style="color:red"> вернуться к работе с таймерами после ознакомления с серией AVR</span> <br>
- 24 PWM Phase Shift (Timer Synchronized) <br>
Для работы требуется осциллограф и генератор ШИМ-сигналов, <span style="color:red"> возможно стоит построить модель в Proteus </span>, <span style="color:red"> вернуться к работе с таймерами после ознакомления с серией AVR</span> <br>
- 25  PWM Shutdown (Break Input) <br>
Для работы требуется осциллограф и генератор ШИМ-сигналов, <span style="color:red"> возможно стоит построить модель в Proteus </span>, <span style="color:red"> вернуться к работе с таймерами после ознакомления с серией AVR</span> <br>
- 26 ECUAL Drivers <br>
Добавление сторонней библиотеки в проект для управления устройствами <br>
- 27 DMA <br>
Краткий обзор <br>
- 28 Math <br> 
Map Function, Constrain, FIR Filters, And Other Math Functions  - <br>
- 29 EEPROM <br> 
- 30 TSC Capacitive Touch Sensing <br> 
- 31 Potentiometer Reading <br>
LED Dimmer <br>
- 32 Low Power Modes <br>


<br>
Замечания: <br>
<span style="color:green"> попробовать использовать логический анализатор вместо осциллографа, для визуализации ШИМ сигналов</span> <br>