################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../DELAY.c \
../DIO.c \
../DIO_cfg.c \
../GIE_prog.c \
../LED.c \
../LED_cfg.c \
../SEVENSEGH.c \
../SEVENSEGH_cfg.c \
../UART.c \
../UART_cfg.c \
../main.c 

OBJS += \
./DELAY.o \
./DIO.o \
./DIO_cfg.o \
./GIE_prog.o \
./LED.o \
./LED_cfg.o \
./SEVENSEGH.o \
./SEVENSEGH_cfg.o \
./UART.o \
./UART_cfg.o \
./main.o 

C_DEPS += \
./DELAY.d \
./DIO.d \
./DIO_cfg.d \
./GIE_prog.d \
./LED.d \
./LED_cfg.d \
./SEVENSEGH.d \
./SEVENSEGH_cfg.d \
./UART.d \
./UART_cfg.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


