#ifndef BRAIN_HPP
 #define BRAIN_HPP
#include <string>
 class Brain
 {
     public:
         Brain();
         ~Brain();

         std::string getBrainAddress();
         void  setBrainAddress();
         std::string identify();

     private:
        std::string _brainAddress;


 };
#endif