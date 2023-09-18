#ifndef UNTITLED_PLAYER_H
#define UNTITLED_PLAYER_H

#include <vector>
#include "Item.h"



class Player {
private:
    std::string name;
    std::vector<Item>vec;
    double p_weight;
    double p_price;
public:
    static double of_weight;
    std::string get_name(){return name;}
    std::vector<Item>get_vec(){return vec;}
    double get_pw(){return p_weight;}
    double get_pp(){return p_price;}

    Player(std::string n)
        : name{n},p_price{0},p_weight{0}{

    }
    void start();
    void show_all();
    double obl_w();
};

#endif //UNTITLED_PLAYER_H
