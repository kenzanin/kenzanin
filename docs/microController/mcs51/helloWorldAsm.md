{% import "microController/mcs51/variables.md" as var %}
{% import "variables.md" as glob %}

# Hello Wolrd Assembly Style

Seperti berbagai contoh bahasa pemograman lain. Pogram pertama yang kita buat adalah {{glob.hello}} hehe. but bukan berarti memunculkan kata {{glob.hello}} di layar PC namun untuk menyalakan dan mematikan LED atau lebih tepat nya pin pada {{var.at89}} dengan interval tertentu.

## Psudo Code

```
main:
    set pin PORT1.0 menjadi LOW
    delay 1 detik
    set pin PORT1.0 menjadi HIGH
    delay 1 detik
    lompat ke main
```
Dari {{pscode}} diatas dapat dibangun program assembly seperti dibawah ini

```asm
--8<-- "microController/mcs51/src/coba01.asm"
```

ketik atau copas code diatas pada {{var.ide}} dan tekan "Compile"(F11) jika tidak ada error pada panel message tekan tombol "Start debug"(F5) maka akan muncul garis warna hijau di code kita, tekan "Step"(F7) untuk mulai menjalankan pogram step by step.

Perhatikan panel "Simulator" pada bagian "P1" nilai dari HEX dan BIN akan berubah-ubah saat pogram sampai pada baris `#!asm setb P1.0` dan `#!asm clr P1.0` jika program ini dimasukkan atau di downloadkan pada {{var.at89}} maka teganan dari P1.0 akan berubah dari 0v ke 5v dan kembali lagi.

## Materi Lanjutan
Untuk belajar lebih banyak tentang assembly pada {{var.at89}} silahkan dilanjutkan pada ["Assembly 8051"](contoh/)

Goodluck.