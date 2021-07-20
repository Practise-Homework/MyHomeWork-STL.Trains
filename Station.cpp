#include <iostream>
#include <string>
#include "Station.h"
#include "Train.h"

void Station::Menu()
{
    char choice;
    int option;
    while (true)
    {
      system("clear");
    std::cout << std::endl;
    std::cout << "What do you wanna do? " << std::endl
              <<" (_[-C-]_)  Create" << std::endl
              <<" (_[-F-]_)  Find" << std::endl
              <<" (_[-S-]_)  Show all information "  << std::endl
              <<" (_[-Q-]_)  Quit" << std::endl
              <<"I'm choice: "; std::cin >> choice;
   

    switch (choice)
    {
    case 'C' :
        std::cout << std::endl;
        Create();
        break;
    case 'F':
    std::cout << "Entry train number: ";
    std::cin >> option; 
       Find(option);
        break;
    case 'S':
        Show();
        break;
    case 'Q':
        exit(0);
        break;
    default:
        std::cout << "-- Invalid argument" << std::endl << std::endl;
        break;
    }
 }
}

void Station::Create()
{
    // Тут создаются сами поезда
  if (Train *train = new Train())
  {
    // Заполняем поля объекта нужной нам инфой
    // За вывод и ввод у нас отвечает перегрузка операторов, кот. реализованна в трейне
     std::cout << "++ New train has been created! " << std::endl;
     std::cin >> *train;
      trains.insert(std::pair<int, Train * >{train->number, train});
    
    // P.S Не понял для чего мы использовали список, когда расспределяли города поездов
    // Поэтому его не реализовал ...
  }
  else
  {
      std::cout << "-- Sorry train has didn't created! " << std::endl
                << " Try to create your train later! " << std::endl
                <<"Recommend : You can create this train in main menu!" << std::endl;
      std::cout << std::endl << "Press any key for exit ... ";
      std::cin.get();
        getc(stdin);
  }
}

void Station::Find(int num)
{
   if (trains[num])
   {
      std::cout << " ++ I was found your train! " << std::endl;
      Train *train = trains[num];
      std::cout << *train;
      
      std::cout << std::endl << "Press any key for exit ... ";
      std::cin.get();
     getc(stdin);
   }
   else
   {
       std::cout << "-- Train with " << num << " number has not be found!" << std::endl;
      std::cout << std::endl << "Press any key for exit ... ";
    std::cin.get();
     getc(stdin);
   }

}

void Station::Show()
{
    for (auto i : trains) // Перебор 
    {
        std::cout <<  *i.second << " " << std::endl; // Вывод содержимого на экран.
    }
    std::cout << std::endl << "Press any key for exit ... ";
    std::cin.get();
     getc(stdin);
}