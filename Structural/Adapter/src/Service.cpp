#include "Service.hpp"

void Service::SpecificRequest(SpecificData data, int *code) const
{
    std::cout << "Request: " << data.data << " " << data.time << std::endl;
    *code = 0;
}
