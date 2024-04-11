################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/implement/JuegoMesa.cpp \
../src/implement/Libro.cpp \
../src/implement/Nino.cpp \
../src/implement/Objeto.cpp 

CPP_DEPS += \
./src/implement/JuegoMesa.d \
./src/implement/Libro.d \
./src/implement/Nino.d \
./src/implement/Objeto.d 

OBJS += \
./src/implement/JuegoMesa.o \
./src/implement/Libro.o \
./src/implement/Nino.o \
./src/implement/Objeto.o 


# Each subdirectory must supply rules for building sources it contributes
src/implement/%.o: ../src/implement/%.cpp src/implement/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-implement

clean-src-2f-implement:
	-$(RM) ./src/implement/JuegoMesa.d ./src/implement/JuegoMesa.o ./src/implement/Libro.d ./src/implement/Libro.o ./src/implement/Nino.d ./src/implement/Nino.o ./src/implement/Objeto.d ./src/implement/Objeto.o

.PHONY: clean-src-2f-implement

