## Virtual Serial Port Emulator Kullanımı

#### [Download Virtual Serial Port Emulator](http://www.eterlogic.com/Downloads.html)
<br />

### VIRTUAL SERIAL PORT EMULATION
* Virtual Serial Ports Emulator programı açılır.
* Yeni cihaz oluşturulur _(Device->Create)_.
* Cihaz tipi **"Connector"** olarak seçilir _(Device type: Connector)_ ve devam edilir. 
* Sanal seri bağlantı noktası (virtual serial port) seçilir ve bitirilir.
* Pencerenin üstündeki start/stop simgelerinden sanal seri bağlantı noktası (virtual serial port) başlatılabilir veya durdurulabilir.  

#### [Virtual Serial Port Emulation video anlatım](https://www.youtube.com/watch?v=xvc1eViNT2U)

<br />  

---
<br />

## Proteus Virtual Port Kullanımı
Proteus ortamına **"COMPIM"** kodlu komponent (Communication Port) eklenir.  

<br />

#### BAĞLANTI
* Portun RXD pini ile Arduino'nun RXD (RX) pini,
* Portun TXD pini ile Arduino'nun TXD (TX) pini bağlanır.  

<br />

#### AYARLAMA
Port çift tıklanarak (Edit Element);
* **"Physical port"**, emulate edilen sanal seri port (virtual serial port) seçilir.
* **"Virtual baud rate"** python ve Arduino kodunda belirlenen baud rate olarak seçilir.  

<br />

---  
<br />

<p align="center">
  <img src="https://github.com/abdullahdangac/Proteus/blob/main/Serial_Communication_with_Arduino/Virtual_Port_with_Python/Proteus_Sources/Virtual_Port_Serial_Com_Arduino.jpg" alt="Virtual Port Serial Com Arduino" width="70%" height="70%" title="Virtual Port Serial Com Arduino">
</p>