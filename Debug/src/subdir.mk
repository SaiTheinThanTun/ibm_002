################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Age.cpp \
../src/Human.cpp \
../src/Infection.cpp \
../src/Location.cpp \
../src/Observer.cpp \
../src/Occupation.cpp \
../src/Patch.cpp \
../src/StatesSummary.cpp \
../src/innerClass5.cpp 

OBJS += \
./src/Age.o \
./src/Human.o \
./src/Infection.o \
./src/Location.o \
./src/Observer.o \
./src/Occupation.o \
./src/Patch.o \
./src/StatesSummary.o \
./src/innerClass5.o 

CPP_DEPS += \
./src/Age.d \
./src/Human.d \
./src/Infection.d \
./src/Location.d \
./src/Observer.d \
./src/Occupation.d \
./src/Patch.d \
./src/StatesSummary.d \
./src/innerClass5.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/dislin -O0 -g3 -Wall -c -fmessage-length=0 -std=c++0x -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


