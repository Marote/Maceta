import serial
ser=serial.Serial('/dev/ttyACM0',9600)
print(ser.name)

entra=raw_input(" valor?")
entra2=chr(int(entra))
ser.write(entra2)
#a=ser.read(size=64)
#print(a)

