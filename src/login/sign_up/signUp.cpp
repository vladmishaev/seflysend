#include <iostream>
#include "signUp.h"
#include <regex>
#include <string>


unsigned short Sign_up::min_char_Email = 3;
unsigned short Sign_up::max_char_Email = 255;

Sign_up::responceVerify Sign_up::verifyMail(std::string email)
{
    responceVerify responce;
    if(email.size() < min_char_Email || email.size() > max_char_Email)
    {
        responce.status = false;
        responce.messageError = "Incorrect number of symbols, the email can contain from " + 
                                 std::to_string(min_char_Email) + " to " + std::to_string(max_char_Email);
        return responce;
    }

    //:refactor(Need to creat more expanded error to user can corret it easily)   
    std::regex validEmail = std::regex(R"(^([a-z0-9_-]+\.)*[a-z0-9_-]+@[a-z0-9_-]+(\.[a-z0-9_-]+)*\.[a-z]{2,6}$)");
    bool isCorrectEmail = std::regex_search(email,validEmail);

    if(isCorrectEmail == false)
    {
        responce.status = false;
        responce.messageError = "Incorrect format of email";
        return responce;
    }
    //:endrefactor

    responce.status = true;
    responce.messageError = "";
    return responce;
}

void Sign_up::getEmail()
{
    std::string email;
    std::cout << "Please enter your email" << std::endl;
    std::cin >> email;

    responceVerify responce = verifyMail(email);
    while(responce.status == false)
    {
        std::cout << responce.messageError + ".Please try again!";
        std::cin >> email;
        responce = verifyMail(email);
    }
    this->Email = email;

}

void Sign_up::start()
{
    getEmail();
    getNikName();
    getPossword();
}

