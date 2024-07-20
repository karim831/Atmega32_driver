CC = xc8-cc

MCU = -mcpu=atmega32

MCAL = \
./mcal_layer/dio_module/dio.c

ECU = \
./ecu_layer/led_module/led.c\
./ecu_layer/switch_module/switch.c

APPLICATION = \
./application.c

TARGET = \
./application.hex



all : $(TARGET)

$(TARGET) : $(APPLICATION) $(MCAL) $(ECU)
	$(CC) $(MCU) $^ -o $@
