#pragma once

#include "node.h"

#include <unordered_map>

class Network: public Node
{
    std::unordered_map<Address, Node *> children;

    public:
        Network() = default;
        bool link(Node *node);
};