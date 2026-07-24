#include <iostream>
#include <string>
#include <vector>
#include <regex>

namespace EnterpriseSystem
{
    namespace Modules
    {
        namespace DataValidation
        {
            namespace Telephony
            {

                void ExecutePhoneValidation()
                {
                    std::vector<std::string> lines = {
                        "987-123-4567",
                        "123 456 7890",
                        "(123) 456-7890"};
                    std::regex pattern("^([0-9]{3}-|\\([0-9]{3}\\) )[0-9]{3}-[0-9]{4}$");
                    std::cout << "Valid Phone Numbers:\n";
                    for (const std::string &line : lines)
                    {
                        if (std::regex_match(line, pattern))
                        {
                            std::cout << line << "\n";
                        }
                    }
                }

            }
        }
    }
}

int main()
{
    EnterpriseSystem::Modules::DataValidation::Telephony::ExecutePhoneValidation();
    return 0;
}