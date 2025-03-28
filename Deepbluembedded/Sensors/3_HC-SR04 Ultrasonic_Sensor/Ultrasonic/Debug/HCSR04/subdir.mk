################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HCSR04/HCSR04.c \
../HCSR04/HCSR04_cfg.c 

OBJS += \
./HCSR04/HCSR04.o \
./HCSR04/HCSR04_cfg.o 

C_DEPS += \
./HCSR04/HCSR04.d \
./HCSR04/HCSR04_cfg.d 


# Each subdirectory must supply rules for building sources it contributes
HCSR04/%.o HCSR04/%.su HCSR04/%.cyclo: ../HCSR04/%.c HCSR04/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-HCSR04

clean-HCSR04:
	-$(RM) ./HCSR04/HCSR04.cyclo ./HCSR04/HCSR04.d ./HCSR04/HCSR04.o ./HCSR04/HCSR04.su ./HCSR04/HCSR04_cfg.cyclo ./HCSR04/HCSR04_cfg.d ./HCSR04/HCSR04_cfg.o ./HCSR04/HCSR04_cfg.su

.PHONY: clean-HCSR04

