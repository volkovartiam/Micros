################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../util/DWT_Delay.c \
../util/Timer_Delay.c 

C_DEPS += \
./util/DWT_Delay.d \
./util/Timer_Delay.d 

OBJS += \
./util/DWT_Delay.o \
./util/Timer_Delay.o 


# Each subdirectory must supply rules for building sources it contributes
util/%.o util/%.su util/%.cyclo: ../util/%.c util/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"D:/MGU/Micros/Micros/Deepbluembedded/Learn STM32 Basics/7_DWT_Timer/util" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-util

clean-util:
	-$(RM) ./util/DWT_Delay.cyclo ./util/DWT_Delay.d ./util/DWT_Delay.o ./util/DWT_Delay.su ./util/Timer_Delay.cyclo ./util/Timer_Delay.d ./util/Timer_Delay.o ./util/Timer_Delay.su

.PHONY: clean-util

