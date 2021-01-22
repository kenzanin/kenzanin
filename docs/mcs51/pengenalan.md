{% import "mcs51/variables.md" as var %}
# Pengenalan

Intel 8051(mcs51) merupakan {{var.uc}} yang cukup tua. dari wikipedia, intel mulai mengembangkannya pada tahun 1980[^1]. cukup tua hehe. Meskipun sudah tua mcs51 sampai sekarang masih tetap dikembangkan dan digunakan tidak hanya itu bahkan beberapa produsen meningkatkan performa mcs51 yang sebelumnya membutuhkan 12cycle clock(tiks) untuk satu instruksi menjadi 1-4tiks saja, selain itu juga penambahan beberapa periperal modern seperti

* ADC 
* Gated GPIO
* PWM
* CAN 
* LCD 
* RTC 
* Dll

menjadikan mcs51 masih populer sampai sekarang.

Dari sisi software sampai sekarang pun, mcs51 masih terus dikembangkan baik secara opensource atau proprietary. diantaranya

* Keil - asm dan c
* IAR - asm dan c
* SDCC - asm dan c 

Pada dokument ini akan menggunakan seri AT89S52 dimana hampir tidak ada perubahan performa dan periperal dibandingkan seri keluarkan intel selain perubahan dari EEPROM pada mcs51 menjadi flash dan sub system ISP pada seri AT89S52. 

[^1]: https://en.wikipedia.org/wiki/Intel_MCS-51