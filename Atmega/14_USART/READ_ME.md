
USART_RX <br>
Прием данных (9600 бит/с, 8 бит, без бита четности), при получении символа 'a' (латиница) загорается встроенный светодиод, при получении любого друго симвала гаснет. В Proteus работает. <br>  

USART <br>
Передача сообщение "Ok!" с переводом на новую строку. В Proteus работает. В тексте программы имеется описание регистров. <br>  

PoolingTx <br>
Передача сообщение "OK" (arnabkumardas). В Proteus работает.  <br>

PoolingRxTx <br>
Ждет приемного сообщение, при получении сообщения отправляет в передачу (arnabkumardas). В Proteus работает (передача только посимвольно).  <br>  

PoolingRx <br>
Действия аналогичны программы в USART_RX.<br>

InterruptTx<br>
Основное тело программы мигание светодиодом, при этом в режиме прерывания постоянно выводится символ 'a' (показана выжность очистки регистра). В Proteus работает.  <br>

InterruptRx<br>
Действия аналогичны программы в USART_RX, по прием идет в редиме прерывания. В Proteus работает.  <br>

InterruptLoopback<br>
Принимает сообщение в режиме прерывания, при получении сообщения отправляет в передачу (arnabkumardas). В Proteus работает (передача только посимвольно).  <br> 



Полезные ссылки <br> 
[gist.github.com](https://gist.github.com/lrvdijk/803189) <br>
[www.arnabkumardas.com](https://www.arnabkumardas.com/arduino-tutorial/usart-programming/) <br>
[Atmel Studio 6.2 Switching between debugWire and programming mode](https://www.youtube.com/watch?v=xJKoc_TI2sw)<br>

Рассмотреть готовые проекты с USART
Подключить логический анализатор/осциллограф
