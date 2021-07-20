#include <iostream>
#include <ostream>
#include <istream>
#include <string>
#include "Train.h"

std::ostream& operator<<(std::ostream& out, const Train& className )
{
   out << std::endl <<"-------------"  << std::endl
       << "Train number: " << className.number << std::endl
       << "Begin destination: " << className.begin << std::endl
       << "End destination  : " << className.end << std::endl
       << "All Time the ways: "   << className.time.tm_hour<<" : "
                                  << className.time.tm_min << " : "
                                  << className.time.tm_sec << std::endl
                                  << "++ Ready!" << std::endl;
  out << "-------------"<< std::endl; 
   return out;
}

std::istream& operator>> (std::istream& in , Train& className)
{
 
   std::cout <<  "Entry train number: ";
       in >> className.number;
   std::cout << "Entry name for begin destination: ";
       in >> className.begin;
   std::cout << "Entry name for end destination: ";
       in >> className.end;
   std::cout << "Entry time for wait: " << std::endl
             << "| Entry hour : ";  in >> className.time.tm_hour;
   std::cout << "| Entry minute: "; in >> className.time.tm_min;
   std::cout << "| Entry second: "; in >> className.time.tm_sec;
   std::cout << "++ Ready! " << std:: endl; 
    return in;
}