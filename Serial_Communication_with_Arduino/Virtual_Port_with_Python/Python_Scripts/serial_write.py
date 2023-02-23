import time
import serial  # (pip) install pyserial


def main():
    serial_com = serial.Serial("COM4", baudrate=9600)

    for i in range(100):
        print(i)
        if i % 2 == 0:
            text = "H"
            serial_com.write(text.encode())
            print(text)

        else:
            text = "L"
            serial_com.write(text.encode())
            print(text)

        time.sleep(1)


if __name__ == '__main__':
    try:
        main()
    except RuntimeError:
        pass
        