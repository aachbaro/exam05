#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
{
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks loke an other boring day." << std::endl;
}

Warlock::~Warlock()
{
    std::cout << this->name << ": My job here is done." << std::endl;
}

void    Warlock::setTitle(std::string const &str)
{
    this->title = str;
}

void    Warlock::introduce() const
{
    std::cout << this->name << ":I am " << this->name << ", " << this->title << "!" << std::endl;
}

std::string const &Warlock::getName() const { return (this->name); }
std::string const &Warlock::getTitle() const { return (this->title); }
