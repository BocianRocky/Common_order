#include "Item.h"
#include <iostream>

void Item::display()const
{
    std::cout<<"-----------------------------------------------------------"<<std::endl;
    std::cout<<"name: "<<get_name()<<"\t\t";
    std::cout<<"price: "<<get_price()<<"\t\t";
    std::cout<<"weight: "<<get_weight()<<"\n";

}
void Item::display_off() const
{
    std::cout<<"name: "<<get_name()<<"\t";
    std::cout<<"price: "<<get_price()<<"\t";
    std::cout<<"weight: "<<get_weight()<<"\n";

}



