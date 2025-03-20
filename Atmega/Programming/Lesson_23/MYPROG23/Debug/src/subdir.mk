################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ariph.c \
../src/main.c \
../src/utils.c 

C_DEPS += \
./src/ariph.d \
./src/main.d \
./src/utils.d 

OBJS += \
./src/ariph.o \
./src/main.o \
./src/utils.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/ariph.d ./src/ariph.o ./src/main.d ./src/main.o ./src/utils.d ./src/utils.o

.PHONY: clean-src

