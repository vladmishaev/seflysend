#pragma once 
#include <iostream>
#include "../sign/sign.h"

class Sign_up : public Sign
{
    private:
        std::string Email;
        static unsigned short min_char_Email;
        static unsigned short max_char_Email;
              
        responceVerify verifyMail(std::string Email);
        void getEmail();
    
    public:
        void start();    
        
        

};
