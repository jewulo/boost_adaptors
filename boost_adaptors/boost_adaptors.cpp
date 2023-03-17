// boost_adaptors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// https://www.caichinger.com/boost-range/boost-adaptors-map_values.html

#include <iostream>
#include <map>
#include <string>

#include <boost/algorithm/string/join.hpp>
#include <boost/range/adaptors.hpp>

const std::map<int, std::string> numbermap_1 = {
    std::make_pair(1, "one"),
    std::make_pair(2, "two"),
    std::make_pair(3, "three"),
};

// you can you braces to initialize 
const std::map<int, std::string> numbermap_2 = { 
    {1,"one"},
    {2,"two"},
    {3,"three"},
};

int main()
{
    std::cout << "map keys: ";
    for (const auto& key : numbermap_1 | boost::adaptors::map_keys) {
        std::cout << key << " ";
    }

    std::cout << std::endl;

    std::cout << "map values: "
              << boost::algorithm::join(numbermap_1 | boost::adaptors::map_values, " ")
              << std::endl;

    std::cout << std::endl;

    std::cout << "map keys: ";
    for (const auto& key : numbermap_2 | boost::adaptors::map_keys) {
        std::cout << key << " ";
    }

    std::cout << std::endl;

    std::cout << "map values: "
        << boost::algorithm::join(numbermap_2 | boost::adaptors::map_values, " ")
        << std::endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
