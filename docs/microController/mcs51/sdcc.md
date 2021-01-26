{%import "microController/mcs51/variables.md" as loc %}
{%import "variables.md" as glob %}

# SDCC

Ada beberapa software C compiler untuk {{loc.at89}} seperti yang sudah dijelaskan pada document ["MCS 51 Software"](software.md). Pada document ini hanya untuk SDCC dikarenakan SDCC merupakan software open source dan dapat di download dengan gratis. 

## Instalasi

SDCC dapat didownload pada alamat http://sdcc.sourceforge.net pada windows installasinya cukup sederhana tinggal next, next, next, yes, finish.

Pada linux SDCC umumnya sudah terdapat pada repo masing-masing, untuk Artix gunakan pacman atau yay untuk instalasi, dengan perintah `$ pacman -S sdcc` atau `$ yay -S sdcc`

Untuk memastikan SDCC sudah terinstall dengan benar buka terminal dan jalankan perintah `sdcc -v` jika muncul keterangan seperti dibawah ini berarti SDCC sudah siap digunakan.

```bash
$ sdcc -v
SDCC : mcs51/z80/z180/r2k/r3ka/gbz80/tlcs90/ez80_z80/ds390/pic16/pic14/TININative/ds400/hc08/s08/stm8/pdk13/pdk14/pdk15 4.0.0 #11528 (Linux)
published under GNU General Public License (GPL)
```

Yups SDCC memang bisa digunakan untuk menghasilkan code(target) untuk berbagai macam {{loc.uc}}, namum pada document ini hanya dibahas untuk target mcs51.
