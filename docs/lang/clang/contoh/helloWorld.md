# Hello World

Pogram yang paling sering dibuat di bumi hehehe.

## Siapkan Source code

siapkan folder kosong dan buatlah file dengan nama helloWorld.c buka dengan text editor dan ketik/copas baris pogram dibawah ini.

```c
--8<-- "lang/clang/contoh/src/helloWorld.c"
```

## Compile dengan GCC

Pada tahap ini file helloWorld.c yang sudah disiapkan akan di baca oleh GCC dan dirubah menjadi format executable.

```bash
$ gcc -o helloWorld helloWorld.c
$ ./helloWorld
$ Hello World
```

## Compile dengan GCC dan Make

Make merupakan Build system yang umum digunakan. jika menggunakan make untuk mengcompile satu file saja cukup menggunakan perintah

```bash
$ make helloWorld
$ ./helloWorld
$ Hello World
```

## The {{ exercism }} Ways

Pada contoh C yang ada di situs ini menggunakan contoh soal yang disediakan oleh {{ exercism }}, {{ exercism }} menyediakan beberapa soal latihan untuk berbagai jenis bahasa pemograman, selain soal latihan {{ exercism }} juga memberikan tempat bagi komunitas untuk berdikusi dan membandingkan solusi dari coding mereka. in short just join (for free) and have fun.

Cara yang dipakai di {{ exercism }} agak berbeda dengan cara yang sudah saya tunjukkan sebelum nya, meskipun juga menggunakan Make namun selain mengcompile source, Make juga digunakan untuk memeriksa apakah pogram yang kita buat sudah sesuai dengan harapan mereka melalui unittest.

### Join {{ exercism }}

Tentu saja untuk menikmati fasilitas di {{ exercism }} kita harus menjadi anggota nya. cukup sederhana juga cara daftarnya jika bisa daftar gmail pasti bisa daftar {{ exercism }}

### Setup Tool

{{exercism}} memberikan tool bantuan untuk bisa menggunakan course nya di desktop. tentu saja tool ini tidak diperlukan jika menggunakan fasilitas web/cloud but saya paling ndak bisa ngoding di hp atau di web hehe.
Download tool nya dan extact file exercism ke `/usr/local/bin` buka terminal dan jalankan perintah

```bash
$ exercism --help
A command-line interface for the v2 redesign of Exercism.

Download exercises and submit your solutions.

Usage:
   [command]

Available Commands:
  configure    Configure the command-line client.
  download     Download an exercise.
  help         Help about any command
  open         Open an exercise on the website.
  prepare      Prepare does setup for Exercism and its tracks.
  submit       Submit your solution to an exercise.
  troubleshoot Troubleshoot does a diagnostic self-check.
  upgrade      Upgrade to the latest version of the CLI.
  version      Version outputs the version of CLI.
  workspace    Print out the path to your Exercism workspace.

Flags:
  -h, --help           help for this command
      --timeout int    override the default HTTP timeout (seconds)
      --unmask-token   will unmask the API during a request/response dump
  -v, --verbose        verbose output

Use " [command] --help" for more information about a command.
```

### Pilih C course

Pilih course/tracks yang diinginkan saya mulai dengan C, C++, Nim, Python, Bash, Lua, Go dan x86_64 Assembly. hehe. Mari mulai dengan C tracks pertama yang kita kerjakan adalah Hello World.

Buka tracks Hello World dan gunakan tombol download untuk meng-copy perintah exercism tool, Buka terminal dan ketik perintah ini

```bash
$ exercism download --exercise=hello-world --track=c
```

maka secara ostosmastis exercism akan mendownload exercise hello-world ke folder default nya `/home/<user>/exercism/c`(exercism workspace)tunggu apa lagi hehe. Buka workspace cari file `README.md` file tersebut merupakan file dengan format markdown dan berisi petunjuk kerja. Buka folder `hello-world/src` pada umumnya akan terdapat dua file dengan extension .c dan .h dimana .c merupakan file source code nya dan .h merupakan headernya.

### Start Working

OK!

#### Baca Perintah

Buka file `hello-world.c` dengan text file editor favoritmu pada file `Readme.md` terdapat perintah untuk

```
The objectives are simple:

- Write a function that returns the string "Hello, World!".
- Run the test suite and make sure that it succeeds.
- Submit your solution and check it at the website.
```

Kurang lebih artinya buka file `hello-world.c` edit supaya saat dicompile dan dijalankan keluar kata "hello World!" ingat tugas ini case sensitive.

#### Edit File

Edit file `hello_world.c` sehingga menjadi seperti dibawah ini

```c
--8<-- "lang/clang/contoh/src/hello_world.c"
```

#### Make/Compile

arahkan terminal ke folder induk tracks, tempat dimana terdapat file Makefile dan jalankan

```bash
$ make
test/test_hello_world.c:32:test_say_hi:PASS

-----------------------
1 Tests 0 Failures 0 Ignored
OK
```
#### Kirim Jawaban ke {{exercism}}
jika ada tulisan 0 Failures pada step [`Make/Compile`](#makecompile) maka tracks udah selesai dan siap dikirim. Kirim jawaban dengan tool exercism menggunakan option summit

```bash
$ exercism submit src/hello_world.c


    Your solution has been submitted successfully.
    You can complete the exercise and unlock the next core exercise at:

    https://exercism.io/my/solutions/57145772eb7542539928bf880ee02cb7

```

### Completing tracks

Buka lagi situs {{exercism}} login jika belum dan buka exercise pada sub bab [`Pilih C Source`](#pilih-c-course) tekan tombol `complete this solution`. sekarang buka tracks selanjutnya hehehe.

Goodluck