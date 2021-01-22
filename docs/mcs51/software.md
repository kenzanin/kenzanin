{% import "mcs51/variables.md" as var %}
# Software 
!!! note
    Tanpa Software/Firmware pun AT89S52 masih sangat berguna, sebagai gantungan kunci hehe.

## Jenis Software
Tidak seperti bagian hardware yang sangat miskin dibanding {{var.uc}} lain {{at89}} memiliki dukungan yang melimpah di bagian ini. Mulai dari asembler, c compiler, pascal compiler, basic compiler sampai simulator bisa dicari dengan sangat mudah. untuk keperluan pembuatan software/firmware dari {{var.uc}} saya menggunakan {{var.ide}} yang bagi saya sudah lebih dari cukup untuk belajar baik C atau assembly.

## {{var.ide}}
Tidak seperti software PC pada umumnya, software pada {{var.uc}} tidak bisa dijalankan(klik 2x) pada PC, hal ini dikarenakan cpu pada PC(x86 atau compatilbe) berbeda dengan cpu {{var.uc}}, sehingga untuk menjalankan software ini digunakan emulator, opsi lainnya adalah mencobanya langsung ke dev board, opsi terakhir ini kurang cocok untuk latihan pemograman {{var.uc}} selain harus beli board nya juga proses pemindahan data dari PC ke {{var.uc}} relative ribet hehe dan juga untuk belajar proses debugging adalah wajib dengan menggunakan board langsung prosess ini butuh alat-alat yang relative mahal.

{{var.ide}} memiliki berbagai fitur yang sangat menarik diantaranya

* Mendukung bahasa C dan assembly.
* Mendukung debugger.
* Mendukung berbagai macam komponen virtual seperti switch, LCD, dll.