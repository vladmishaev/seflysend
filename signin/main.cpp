#include <iostream>
#include <regex>

class Sign_in
{
    private:
        std::string nik_name;
        std::string password;

        
        bool verifyPassword(std::string password)
        {
            if(password.size() < 4)
            {
                return false;
            }

            for(int i = 0; i < password.size(); i++)
            {
                if(password[i] == ' ')
                {
                    return false;
                }
            }

            return true;
        }

        void getPossword()
        {
            std::string password;
            std::cout << "Please enter your password" << std::endl;
            std::cin >> password;

            while(verifyPassword(password) == false)
            {
                
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
    std::cout << "Please enter your nikname" << std::end;
    std::string NikName;
    std::cin >> NikName;
    std::string password;
    std::cin >> password;


    return 0;
}
