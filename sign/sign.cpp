#include "sign.h"




        
Sign::responceVerify  Sign::verifyPassword(std::string password)
{
    responceVerify responce;
    

    if(password.size() <= 4)
    {
        responce.status = false;
        responce.messageError = "Invalid number of characters, password must contain more than 4 symbols";
        return responce;
    }

    for(int i = 0; i < password.size(); i++)
    {
        if(password[i] == ' ')
        {
            responce.status = false;
            responce.messageError = "Password can't contain space";
            return responce;
        }
    }

    responce.status = true;
    responce.messageError = "";

    return responce;
}

void Sign::getPossword()
{
    std::string password;
    std::cout << "Please enter your password" << std::endl;
    std::getline(std::cin, password);

    responceVerify responce = verifyPassword(password);

    while(responce.status == false)
    {
        std::cout << responce.messageError << std::endl;
        getline(std::cin, password);
        responce = verifyPassword(password);             
    }
    this->password = password;

}

Sign::responceVerify  Sign::verifyNikName(std::string nikname)
{
    responceVerify responce;
    
    if(nikname.size() <= 4)
    {
        responce.status = false;
        responce.messageError = "Invalid number of characters, nikname must contain more than 4 symbols";
        return responce;
    }

    std::string invalidChar= "@#$%&,*()+=~`\"><?! ";

    for(int i = 0; i < nikname.size(); i++)
    {
        for(int j = 0; j < invalidChar.size(); j++)
        {
            if(nikname[i] == invalidChar[j])
            {
                responce.status = false;
                responce.messageError = "The nikname can't contain the folowing symbols (@ # $ % & , * ( ) + = ~ ` \" > < ? !) and space";
                return responce; 
            }
        }
    }

    responce.status = true;
    responce.messageError = "";


    return responce;
}

void Sign::getNikName()
{
    std::string nikname;
    std::cout << "Please enter your nikname" << std::endl;
    std::getline(std::cin, nikname);

    responceVerify responce = verifyNikName(nikname);

    while (responce.status == false) 
    {
        std::cout << responce.messageError << std::endl;
        std::getline(std::cin, nikname);
        responce = verifyNikName(nikname);
    }

    this->nik_name = nikname;
}

    
Sign::Sign()
{
   getNikName();
   getPossword();

}

