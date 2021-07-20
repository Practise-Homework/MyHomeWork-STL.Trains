#pragma once
#include <iostream>
#include <istream>
#include <ostream>
#include <string>
#include <ctime>

/*
*
* Класс Train содержит только ведомости об имеющихся поездах
* Которые потом я буду мапить в классе Стейшен по номеру. 
*/

class Train
{
  public:
   int number; // На тот случай чтоб сюда не ввели строку
     std::string begin;
     std::string end;
    tm time;
    friend std::istream& operator>>(std::istream& , Train&);
    friend std::ostream& operator<<(std::ostream& , const Train&);
};
           std::istream& operator>>(std::istream& , Train&);
           std::ostream& operator<<(const std::ostream& , const Train&);