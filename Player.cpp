#include <iostream>
#include "Player.h"

double Player::of_weight{0};

void Player::start() {
    int x{};
    std::string n{};
    double y{},z{};

    do{
        std::cout<<std::endl;
        std::cout<<"enter name of product: ";
        std::cin>>n;
        std::cout<<"enter price of product: ";
        std::cin>>y;
        std::cout<<"enter weight of product: ";
        std::cin>>z;
        p_price+=y;
        p_weight+=z;
        of_weight+=z;
        Item temp(n,y,z);
        vec.push_back(temp);
        std::cout<<"next item/end (1/0): ";
        std::cin>>x;




    }while(x!=0);
}

void Player::show_all(){
    std::cout<<"\t"<<get_name()<<":"<<std::endl;
    std::cout<<"price of items: "<<get_pp()<<std::endl;
    std::cout<<"weight of items: "<<get_pw()<<std::endl;
    std::cout<<"\n\n\n("<<get_name()<<")  all items:"<<std::endl;
    for (const auto &x:get_vec()) {
        x.display();
    }

}
double Player::obl_w() {
    return get_pw()/of_weight;
}
