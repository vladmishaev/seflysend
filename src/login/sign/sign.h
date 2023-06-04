#pragma once
#include <iostream>

class Sign
{
    protected:
        std::string nik_name;
        std::string password;
                  
        struct responceVerify
        {
            bool status;
            std::string messageError;
        };

        void getPossword();
        void getNikName();

    private:
       responceVerify verifyPassword(std::string password);
       responceVerify verifyNikName(std::string nikname);
};
