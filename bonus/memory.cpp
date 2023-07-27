#include <iostream>

// Library effective with Windows
// #include <windows.h>
 
// Library effective with Linux
#include <unistd.h>

int main() {
    while (true)
    {
        for(int i = 200; i>0; i--){
            int *myArray = new int[10]; // Выделяем динамический массив на 10 элементов
            myArray[0] = 1; // Присваиваем первому элементу значение 1
            // Забываем освободить выделенную память
        }  /* code */
        sleep(0.5);

    }
    
    
    
    return 0;
}