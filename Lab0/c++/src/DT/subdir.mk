################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/DT/DTObjetoRoto.cpp 

CPP_DEPS += \
./src/DT/DTObjetoRoto.d 

OBJS += \
./src/DT/DTObjetoRoto.o 


# Each subdirectory must supply rules for building sources it contributes
src/DT/%.o: ../src/DT/%.cpp src/DT/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O2 -g -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-DT

clean-src-2f-DT:
	-$(RM) ./src/DT/DTObjetoRoto.d ./src/DT/DTObjetoRoto.o

.PHONY: clean-src-2f-DT

