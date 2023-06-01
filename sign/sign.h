#pragma once
#include <iostream>

class Sign
{
    private:
        std::string nik_name;
        std::string password;

       struct responceVerify
       {
           bool status;
           std::string messageError;
       };

       responceVerify verifyPassword(std::string password);

       void getPossword();

       responceVerify verifyNikName(std::string nikname);
       
       void getNikName();
    
    public:    
        Sign();

};
