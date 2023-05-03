#pragma once

#include <string>

struct Address
{
    std::string value;
};

class Node
{
    Node *parent;
    Address address;

    public:
        Node() = default;
};