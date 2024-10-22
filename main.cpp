#include <iostream>
using namespace std;

// Fungsi untuk menukar dua elemen
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

// Fungsi untuk melakukan Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Fungsi untuk melakukan Binary Search
int binarySearch(int arr[], int l, int r, int x) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        // Jika elemen ditemukan di tengah
        if (arr[mid] == x)
            return mid;

        // Jika elemen lebih besar, abaikan bagian kiri
        if (arr[mid] < x)
            l = mid + 1;

        // Jika elemen lebih kecil, abaikan bagian kanan
        else
            r = mid - 1;
    }

    // Jika elemen tidak ditemukan
    return -1;
}

int main() {
    int n;

    // Input jumlah elemen
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int arr[n];

    // Input elemen array
    cout << "Masukkan elemen array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Melakukan sorting pada array
    bubbleSort(arr, n);

    // Menampilkan array setelah diurutkan
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Input elemen yang ingin dicari
    int x;
    cout << "Masukkan elemen yang ingin dicari: ";
    cin >> x;

    // Melakukan pencarian menggunakan binary search
    int result = binarySearch(arr, 0, n - 1, x);

    // Menampilkan hasil pencarian
    if (result == -1)
        cout << "Elemen tidak ditemukan." << endl;
    else
        cout << "Elemen ditemukan pada indeks ke-" << result << "." << endl;

    return 0;
}
