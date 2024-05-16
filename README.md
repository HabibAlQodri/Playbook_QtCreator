# Aplikasi Playbook

## Deskripsi Umum

Proyek ini adalah aplikasi Playbook yang dikembangkan menggunakan Qt Creator dengan Qt 13.0.1 (Community). Sistem ini terdiri dari dua komponen utama: layar login admin dan layar login pengguna. Aplikasi ini memungkinkan admin dan pengguna untuk masuk dan melakukan tugas-tugas tertentu terkait dengan pengelolaan dan melihat buku.

## Tools yang Digunakan

- **Versi Qt**: 13.0.1 (Community)
- **Lingkungan Pengembangan**: Qt Creator
- **Bahasa Pemrograman**: C++

## Fitur

- **Login Admin**: Login aman untuk administrator untuk mengelola buku dan pengguna.
- **Login Pengguna**: Login aman untuk pengguna untuk melihat dan mencari buku.
- **Manajemen Buku**: Admin dapat menambah, mengedit, dan menghapus entri buku.
- **Antarmuka Pengguna**: UI sederhana dan intuitif yang dirancang dengan Qt Widgets.

## Gambaran Antarmuka

- **Menu Utama**

    Terdiri atas login screen dari admin dan user.

    ![Menu Utama](https://github.com/HabibAlQodri/Playbook_QtCreator/blob/0c16083cd608c5244c4233c90aa2da658dbe2ee6/Ilustrasi_Playbook/Menu%20Utama.png?raw=true)

- **LoginScreen User**
    
    Terdiri dari Username dan Password.

    ![LoginScreen User](https://github.com/HabibAlQodri/Playbook_QtCreator/blob/0c16083cd608c5244c4233c90aa2da658dbe2ee6/Ilustrasi_Playbook/LoginScreen%20User.png?raw=true)

- **Antarmuka dari Fungsi Menambahkan Buku dari User**

    Terdiri atas fungsi tambahkan dan lihat.

    ![Antarmuka Menambahkan Buku User](https://github.com/HabibAlQodri/Playbook_QtCreator/blob/0c16083cd608c5244c4233c90aa2da658dbe2ee6/Ilustrasi_Playbook/FullAdd%20User.png?raw=true)

- **Fungsi Menambahkan Buku dari User**
    
    Menulis judul, Author dan tahun terbit.

    ![Fungsi Menambahkan Buku User](https://github.com/HabibAlQodri/Playbook_QtCreator/blob/0c16083cd608c5244c4233c90aa2da658dbe2ee6/Ilustrasi_Playbook/AddSistem%20User.png?raw=true)

- **LoginScreen Admin**
    
    Terdiri dari Username dan Password.

    ![LoginScreen Admin](https://github.com/HabibAlQodri/Playbook_QtCreator/blob/0c16083cd608c5244c4233c90aa2da658dbe2ee6/Ilustrasi_Playbook/LoginScreen%20Admin.png?raw=true)

- **Antarmuka dari Fungsi Menambahkan, Menghapus, dan Melihat Buku dari Admin**

    Terdiri atas fungsi tambahkan dan lihat.

    ![Antarmuka Menambahkan Buku Admin](https://github.com/HabibAlQodri/Playbook_QtCreator/blob/0c16083cd608c5244c4233c90aa2da658dbe2ee6/Ilustrasi_Playbook/FullAdd%20Admin.png?raw=true)

- **Fungsi Menambahkan Buku dari Admin**
    
    Menulis judul, Author dan tahun terbit.

    ![Fungsi Menambahkan Buku Admin](https://github.com/HabibAlQodri/Playbook_QtCreator/blob/0c16083cd608c5244c4233c90aa2da658dbe2ee6/Ilustrasi_Playbook/deleteSistem%20Admin.png?raw=true)

## Tata Cara Instalasi

1. **Clone repositori**:
   ```bash
   git clone https://github.com/HabibAlQodri/Playbook_QtCreator.git
   cd Playbook_QtCreator

atau download dengan menggunakan ZIP.

2. **Buka proyek di Qt Creator**:

- Jalankan Qt Creator.
- Pilih File > Open File or Project....
- Arahkan ke repositori yang telah di-klon dan buka file .pro.
- Blok semua proyek lalu open.

3. **Konfigurasi dari proyek**
- Atur sesuai dengan versi dari Qt yang akan dijalankan.
- Konfigurasi dengan build kit.

4. **Build dan Jalankan proyek**
- Debug proyek tersebut.
- Build sebelum dijalankan.

## Kesimpulan

Aplikasi Playbook ini adalah solusi yang efektif untuk mengelola dan melihat buku dengan antarmuka yang sederhana dan intuitif. Dikembangkan menggunakan Qt 13.0.1 (Community), aplikasi ini menyediakan login aman untuk admin dan pengguna, memungkinkan admin untuk mengelola buku dan pengguna dengan mudah, dan memberikan pengalaman pengguna yang menyenangkan dengan UI yang bersih dan mudah digunakan. Aplikasi ini dapat diinstal dan dijalankan dengan mudah menggunakan Qt Creator, dan dapat dikembangkan lebih lanjut sesuai dengan kebutuhan pengguna.
