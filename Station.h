#pragma once 
#include <map>
#include <list>
#include <string>
#include <ctime>
#include "Train.h"

class Station
{
   private:
     std::map<int, Train*> trains;
   public:
    void Create();
    void Delete();
    void Show(); 
    void Find(int);
    void Menu(); 
};