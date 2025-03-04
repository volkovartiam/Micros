В примере 
https://narodstream.ru/stm-urok-11-hal-staticheskaya-indikaciya/
Для BluePill по умолчанию частота таймера 8 МГЦ, Prescaler = 0, ARR = 65535 
при этом рассчетное время составляет 0.008 с (визуально переключения ни видно);
пришлось дополнительно выставить Prescaler = 50 
частота таймера 8 МГЦ, Prescaler = 50, ARR = 65535 
при этом рассчетное время составляет 0.417 с (видно мигание/мерцание светодиодов);

// Для программирования STM32 BOOT0=0 и BOOT1=0 требуется зажать Reset и законектиться 
(при использовании STM32CubeProgrammer).

По проблемам с программатором ST-LINK-V2
https://deepbluembedded.com/stm32-debugging-with-st-link-v2-swd-serial-wire-viewer/

https://web.archive.org/web/20170817195432/https://www.iar.com/support/tech-notes/debugger/application-does-not-run-stand-alone/

https://dimoon.ru/obuchalka/stm32f1/programmirovanie-stm32-chast-14-proshivaem-stm32-cherez-st-link.html