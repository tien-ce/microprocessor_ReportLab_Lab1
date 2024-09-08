################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (9-2020-q2-update)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
E:/Microprocesser-microcontroller/SOW/Src/LED.c \
E:/Microprocesser-microcontroller/SOW/Src/LED_7_SEGMENT.c \
E:/Microprocesser-microcontroller/SOW/Src/Traffic_light.c 

OBJS += \
./SOW/Src/LED.o \
./SOW/Src/LED_7_SEGMENT.o \
./SOW/Src/Traffic_light.o 

C_DEPS += \
./SOW/Src/LED.d \
./SOW/Src/LED_7_SEGMENT.d \
./SOW/Src/Traffic_light.d 


# Each subdirectory must supply rules for building sources it contributes
SOW/Src/LED.o: E:/Microprocesser-microcontroller/SOW/Src/LED.c SOW/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"E:/Microprocesser-microcontroller/SOW/Ins" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
SOW/Src/LED_7_SEGMENT.o: E:/Microprocesser-microcontroller/SOW/Src/LED_7_SEGMENT.c SOW/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"E:/Microprocesser-microcontroller/SOW/Ins" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
SOW/Src/Traffic_light.o: E:/Microprocesser-microcontroller/SOW/Src/Traffic_light.c SOW/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"E:/Microprocesser-microcontroller/SOW/Ins" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

