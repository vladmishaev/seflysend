#include <iostream>


class Sing_up
{
    private:
        std::string nike_name;
        std::string mail;
        std::string password;

        struct responceVerify
        {
            bool status;
            std::string massage;
        };

        
        responceVerify verifyNikname(std::string nikename)
        {
            responceVerify responce;
            
            if(nikename.size() <= 4)
            {
                responce.status = false;
                responce.massage = "Invalid number of characters, nikname must contain more than 4 symbols";
                return responce;
            }


            return responce;
        }
        
        void getNikName()
        {
            std::string nikename;
            std::cout << "Plese enter your nikename" << std::endl;
            getline(std::cin, nikename);
        
        }        
};

int main()
{
    return 0;
}
