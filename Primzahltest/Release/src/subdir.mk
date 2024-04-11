################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/main.cpp \
../src/primemath.cpp \
../src/userinput.cpp 

CPP_DEPS += \
./src/main.d \
./src/primemath.d \
./src/userinput.d 

OBJS += \
./src/main.o \
./src/primemath.o \
./src/userinput.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/main.d ./src/main.o ./src/primemath.d ./src/primemath.o ./src/userinput.d ./src/userinput.o

.PHONY: clean-src

