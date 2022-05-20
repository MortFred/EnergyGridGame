#include <exception>

struct InvalidPowerPlantList : public std::exception {
   const char * what () const throw () {
      return "The PowerPlantList is invalid!";
   }
};