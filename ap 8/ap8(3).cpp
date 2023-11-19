#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int key) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int middle = left + (right - left) / 2;

        if (arr[middle] == key) {
            return middle; // Kunci ditemukan
        } else if (arr[middle] < key) {
            left = middle + 1; // Gunakan sisi kanan untuk pencarian selanjutnya
        } else {
            right = middle - 1; // Gunakan sisi kiri untuk pencarian selanjutnya
        }
    }

    return -1; // Kunci tidak ditemukan
}

int main() {
    // Contoh penggunaan
    std::vector<int> sortedArray = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int key;

    std::cout << "Masukkan kunci yang dicari: ";
    std::cin >> key;

    int result = binarySearch(sortedArray, key);

    if (result != -1) {
        std::cout << "Kunci ditemukan pada indeks: " << result << std::endl;
    } else {
        std::cout << "Kunci tidak ditemukan." << std::endl;
    }

return 0;
}