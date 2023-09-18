#ifndef UNTITLED_ITEM_H
#define UNTITLED_ITEM_H

#include <string>

class Item {
private:
    std::string name;
    double price;
    double weight;
public:
    std::string get_name() const{return name;}
    double get_price() const{return price;}
    double get_weight() const{return weight;}
    void display() const;
    void display_off() const;


    Item(std::string n, double p, double w)
        : name{n}, price{p}, weight{w}{
    }

    Item(const Item &source)
        : name{source.name},price{source.price},weight{source.weight}{}

    ~Item(){}


};

#endif //UNTITLED_ITEM_H
