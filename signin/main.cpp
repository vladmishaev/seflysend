#include <iostream>

class Sign_in
{
    private:
        std::string nik_name;
        std::string password;

        struct responceVerPass
        {
            bool status;
            std::string messageError;
        };

        
        responceVerPass verifyPassword(std::string password)
        {
            responceVerPass responce;
            

            if(password.size() < 4)
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
            responce.messageError = " ";

            return responce;
        }

        void getPossword()
        {
            std::string password;
            std::cout << "Please enter your password" << std::endl;
            std::cin >> password;

            responceVerPass r

            while(verifyPassword(password) == false)
            {
                std::cout << "Password can't contain space" << std::endl;               
            }

        }

        void getNikName()
        {
            std::cout << "Please enter your nikname" << std::endl;
            std::cin >> this->nik_name;

        }
    
    public:    
        Sign_in()
        {
            getNikName();
            getPossword();

        }

};

int main()
{
    std::cout << "Please enter your nikname" << std::endl;
    std::string NikName;
    std::cin >> NikName;
    std::string password;
    std::cin >> password;


    return 0;
}
