# Cara install Arduino

Arduino IDE bisa diinstall di PC atau juga bisa digunakan secara cloud (internet). Tentu saja untuk warga minim quota cara offline lebih baik dibanding cara cloud hehe.

Berikut cara install arduino secara Offline.
- Download Arduino IDE
- Install Arduino IDE

## Download Arduino
Arduino IDE bisa di download secara gratis di official sitenya [https://www.arduino.cc/en/Main.Software](https://www.arduino.cc/en/Main.Software) ada beberapa versi yang bisa digunakan disini untuk user _"biasa"_ versi stable sudah lebih dari cukup untuk memulai. Selanjutnya pilih file yang sesuai dengan OS dan CPU kita. pilihan yang disediakan cukup lengkap mulai dari MacOS, Windows (win7 keatas) dan linux. selain pengguna OS tersebut, bisa menggunakan Arduino IDE Cloud.

## Install di Linux (Artix)
Untuk major Linux distro Arduino sudah ada di repo masing-masing. untuk install tinggal jalankan package manager, untuk Artix bisa menggunakan **_pacman -S arduino_** system akan segera mendownload dan meng install arduino untuk system-wide users. namum bagi saya menginstall arduino di home merupakan cara terbaik dikarenakan versi arduino yang didapatkan dengan cara mendownload dari official site lebih stabil karena mempertahankan komponen pendukung seperti java-jre yang dipakai oleh arduino IDE. Untuk menginstall Arduino di home download arduino yang sesuai dengan arch CPU dan extract di /home/user/opt terdapat file setup.sh di dalam folder tersebut, gunakan jika ingin mendapatkan shortcut pada start menu.

## install di windows (win 7 ke atas)
Download dari official website dan jalankan. tekan next - next - next done hehe.