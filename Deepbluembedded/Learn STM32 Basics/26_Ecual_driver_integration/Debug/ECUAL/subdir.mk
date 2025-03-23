################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../ECUAL/LCD16X2.c \
../ECUAL/LCD16X2_cfg.c 

C_DEPS += \
./ECUAL/LCD16X2.d \
./ECUAL/LCD16X2_cfg.d 

OBJS += \
./ECUAL/LCD16X2.o \
./ECUAL/LCD16X2_cfg.o 


# Each subdirectory must supply rules for building sources it contributes
ECUAL/%.o ECUAL/%.su ECUAL/%.cyclo: ../ECUAL/%.c ECUAL/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-ECUAL

clean-ECUAL:
	-$(RM) ./ECUAL/LCD16X2.cyclo ./ECUAL/LCD16X2.d ./ECUAL/LCD16X2.o ./ECUAL/LCD16X2.su ./ECUAL/LCD16X2_cfg.cyclo ./ECUAL/LCD16X2_cfg.d ./ECUAL/LCD16X2_cfg.o ./ECUAL/LCD16X2_cfg.su

.PHONY: clean-ECUAL

