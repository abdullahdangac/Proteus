# Proteus Projelerinde Arduino Kullanma
## Arduino Kütüphanesini Proteus'a Ekleme
1. Proteus'un kurulu olduğu dizindeki  'LIBRARY' klasörüne gidilir.  
	&nbsp; &nbsp; &nbsp; &nbsp;_Ör. C:\Program Files (x86)\Labcenter Electronics\Proteus 8 Professional\DATA\LIBRARY_

2. **"LIBRARY"** klasörü içerisine [Arduino kütüphaneleri][1] eklenir.  

<br />

## Arduino Kodunu Proteus'a Ekleme
1. [Arduino IDE][2] çalıştırılır ve Arduino üzerinde koşacak kod yazılır.  

2. Arduino IDE'nin üst kısmından _**Sketch->Export compiled Binary**_ seçimleri yapılır.  

3. Proteus açılır ve kütüphaneden Arduino seçilerek çalışma alanına yerleştirilir.  

4. Arduino'ya çift tıklanır. Açılan pencerede _**"Program File: "**_ kısmının yanında bulunan klasör simgesine tıklanıp Arduino kodunun yer aldığı konuma gidilerek _**.ino.standart.hex**_ uzantılı dosya seçilir.  

5. _**"Ok"**_ tıklanarak pencere kaptılır.  

<br />  
veya  

---  

<br />

1. [Arduino IDE][2] çalıştırılır ve Arduino üzerinde koşacak kod yazılır.  

2. Arduino IDE'nin üst kısmından _**File->Preferences->"Show werbose output during: [X]compilation"**_ seçeneği işaretlenir.  

3. _**"Compile"**_ butonuna basılır veya _**Sketch->Verify/Compile**_ seçimi yapılır.

4. Arduino IDE'nin alt kısmında derleme bilgilerinin yazıldığı terminal büyütülerek _**.ino.standart.hex**_ uzantılı dosya yolu bulunur ve kopyalanır.  

5. Proteus açılır ve kütüphaneden Arduino seçilerek çalışma alanına yerleştirilir.  

6. Arduino'ya çift tıklanır. Açılan pencerede _**"Program File: "**_ kısmına, kopylanan _**.ino.standart.hex**_ uzantılı dosya yolu yapıştırılır.  

7. _**"Ok"**_ tıklanarak pencere kaptılır.

<br />  
<br />

[Video anlatım](https://www.youtube.com/watch?v=OCLpG3T-SM8)

[1]: https://github.com/abdullahdangac/Proteus/tree/main/Arduino_in_Proteus/Proteus_Arduino_Library
[2]: https://www.arduino.cc/en/software