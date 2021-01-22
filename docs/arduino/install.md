# Cara install {{ arduino }}

{{ arduIde }} bisa diinstall di PC atau juga bisa digunakan secara cloud (internet). Tentu saja untuk warga minim quota cara offline lebih baik dibanding cara cloud hehe.

Berikut cara install {{ arduino }} secara Offline.

* Download {{ arduIde }}
* Install {{ arduIde }}

## Download {{arduino}}
{{arduino}} bisa di download secara gratis di official sitenya {{arduIdeUrl}} ada beberapa versi yang bisa digunakan disini untuk user _"biasa"_ versi stable sudah lebih dari cukup untuk memulai. Selanjutnya pilih file yang sesuai dengan OS dan CPU kita. pilihan yang disediakan cukup lengkap mulai dari MacOS, Windows (win7 keatas) dan linux. selain pengguna OS tersebut, bisa menggunakan {{ arduIde }} Cloud.

## Install di Linux (Artix)
Untuk major Linux distro {{ arduino }} sudah ada di repo masing-masing. untuk install tinggal jalankan package manager, untuk Artix bisa menggunakan **_pacman -S arduino_** system akan segera mendownload dan meng install {{ arduino }} untuk system-wide users. namum bagi saya menginstall {{ arduino }} di home merupakan cara terbaik dikarenakan versi {{ arduino }} yang didapatkan dengan cara mendownload dari official site lebih stabil karena mempertahankan komponen pendukung seperti java-jre yang dipakai oleh {{ arduIde }}. Untuk menginstall {{ arduino }} di home download {{ arduino }} yang sesuai dengan arch CPU dan extract di /home/user/opt terdapat file setup.sh di dalam folder tersebut, gunakan jika ingin mendapatkan shortcut pada start menu.

## install di windows (win 7 ke atas)
Download dari official website dan jalankan. tekan next - next - next done hehe.