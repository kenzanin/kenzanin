# Instalasi C compiler

C compiler digunakan untuk menterjemahkan bahasa C yang kita ketik(atau copas :D) untuk menjadi sebuah file _executable_ file ini biasanya berakhiran .exe pada windows atau berakhiran bebas jika menggunakan [Linux](../../linux/artix/pengenalan.md).

Ada banyak compiler baik _free_ atau _berbayar_ yang bisa digunakan, baik di Windows, Linux, atau MacOs. kali ini kita akan fokus untuk menginstall C compiler pada linux atau lebih tepat nya [Artix Linux](../../linux/artix/pengenalan.md){:target=_blank}.

Pada Artix C compiler yang tersedia antara lain

* Clang
* GCC
* tcc
* Intel C compiler
* AMD C compiler
* Dll

Tidak perlu semua Compiler diinstall cukup pilih satu saja dan untuk compatibilitas GCC merupakan compiler yang paling banyak dipakai selanjutnya Clang. Pada komputer saya saya menggunakan GCC, Clang dan tcc.

Untuk GCC pada artix di sediakan dalam package group base-devel sedang untuk Clang bisa diinstall terpisah.

* installasi GCC
``` sh
sudo pacman -S base-devel gdb --needed
```
* installasi Clang
``` sh
sudo pacman -S base-devel clang lldb
```

## Check C compiler yang terinstall

Untuk pemeriksaan dasar di linux cukup mudah karena compiler terinstall secara system-wide dan berbagai tool sudah diinstall di PATH nya jadi tinggal gunakan terminal yang ada dan ketik gcc -v atau clang -v saja.

1. Jalankan terminal (lxterminal)
2. ketik gcc -v
``` bash
kenzanin@artix|~
) gcc -v
Using built-in specs.
COLLECT_GCC=/usr/bin/gcc
COLLECT_LTO_WRAPPER=/usr/lib/gcc/x86_64-pc-linux-gnu/10.2.0/lto-wrapper
Target: x86_64-pc-linux-gnu
Configured with: /build/gcc/src/gcc/configure --prefix=/usr --libdir=/usr/lib --libexecdir=/usr/lib --mandir=/usr/share/man --infodir=/usr/share/info --with-bugurl=https://bugs.archlinux.org/ --enable-languages=c,c++,ada,fortran,go,lto,objc,obj-c++,d --with-isl --with-linker-hash-style=gnu --with-system-zlib --enable-__cxa_atexit --enable-cet=auto --enable-checking=release --enable-clocale=gnu --enable-default-pie --enable-default-ssp --enable-gnu-indirect-function --enable-gnu-unique-object --enable-install-libiberty --enable-linker-build-id --enable-lto --enable-multilib --enable-plugin --enable-shared --enable-threads=posix --disable-libssp --disable-libstdcxx-pch --disable-libunwind-exceptions --disable-werror gdc_include_dir=/usr/include/dlang/gdc
Thread model: posix
Supported LTO compression algorithms: zlib zstd
gcc version 10.2.0 (GCC) 
```
3. Jika pada tahap 2 muncul tulisan tersebut berarti GCC siap digunakan.