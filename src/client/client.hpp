#pragma once

#include "rpc/client.h"
#include <string>

namespace client 
{
    class client 
    {
        rpc::client c;
        public:
            client(std::string ipv4, const int port): c(ipv4, port)
            { }

            void receive();
    };
}