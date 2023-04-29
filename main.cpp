#include <iostream>
 #include <cmath>
#include <windows.h>
 #include <limits>
 #include <numeric>

 int main() {
     SetConsoleOutputCP(CP_UTF8);

     /* Проверка ввода данных (справочно)
     while(true)
     {
         float value; // попробуйте разные типы данных
         std::cin >> value;

         if (std::cin.fail() || std::cin.peek() != '\n')
         {
             std::cerr << "Ошибка ввода данных\n";

             // Данные две строки необходимы для очистки буфера ввода, без них, при последующем вводе данных, произойдёт зацикливание:
             std::cin.clear();
             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

             // Если нужно прервать программу:
             // return 1; // выход из функции main, соответственно и из программы
             // exit(1); // а так можно выйти из программы в любом месте
             // цифры - это номера ошибок передаваемые программой в ОС,
             // 0 - всё хорошо, не 0 - какой-то код, который разработчик устанавливает сам...
         }
         else
             std::cout << value << '\n';
     }

     return 0;
      */
  float hp=-1;

  while (hp<0 || hp>1) {
    std::cout<<"Введите количество здоровья орка(0-1): " ;
    std::cin>>hp;
    if (hp>1||hp<0||std::cin.fail() || std::cin.peek() != '\n') {
      std::cerr << "Ошибка ввода данных\n";
      std::cin.clear();
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }

  float magResist=-1;

  while (magResist<0 || magResist>1) {
    std::cout<<"Введите сопротивляемость магии орка (0-1): " ;
    std::cin>>magResist;
  if (magResist>1||magResist<0||std::cin.fail() || std::cin.peek() != '\n') {
      std::cerr << "Ошибка ввода данных\n";
      std::cin.clear();
       std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }

float fireBall;

  while (hp>0) {

    std::cout<<"Введите урон фаербола (0-1): " ;
    std::cin>>fireBall;
    if (fireBall<0 || fireBall>1 || std::cin.fail() ||std::cin.peek()!='\n') {
      std::cerr<<"Ошибка ввода данных \n" ;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } else {
      hp=hp-(1-magResist)*fireBall;
      if (hp<0) {
        hp=0;
      }
      std::cout<<"Урон "<<fireBall<<", сопротивляемость " <<magResist<<", по орку нанесено "<<(1-magResist)*fireBall<<" урона, оставшееся здоровье: "<<hp<<"\n";
    }
  }
std::cout<<"Орк погиб.. " ;
}