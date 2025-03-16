#include "Adapter.hpp"
#include "IClient.hpp"
#include "Service.hpp"
#include <memory>

int main()
{
    std::unique_ptr<IClient> client = std::make_unique<Adapter>(Service());
    int code = client->Request({12345, 0});
    if (code == 0)
    {
        std::cout << "Success." << std::endl;
    }
    return 0;
}