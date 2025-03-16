#include "Adapter.hpp"

int Adapter::Request(Data data) const
{
    int code;
    SpecificData specificData = {std::to_string(data.data), data.time};
    mService.SpecificRequest(specificData, &code);
    return code;
}

Adapter::Adapter(Service service) : mService(service)
{
}
