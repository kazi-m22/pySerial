import serial
import time

ser = serial.Serial(port = 'COM6', baudrate=9600, timeout=1)



while True:
    ser.write(1)

