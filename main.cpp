#include <iostream>
#include "Player.h"

void count_of_all();

int main()
{
    count_of_all();

}

void count_of_all()
{
    double ship{0};
    int y{0};
    std::cout<<"shipping cost: ";
    std::cin>>ship;
    std::cout<<std::endl;
    std::vector<Player>ofvec;
    std::string namee{};
    do{
        std::cout<<"enter client name: "<<std::endl;
        std::cin>>namee;
        Player ptemp{namee};
        ptemp.start();
        ptemp.show_all();
        ofvec.push_back(ptemp);
        std::cout<<"wanna continue?"<<std::endl;
        std::cin>>y;
    }while(y!=111);

    for (auto &x:ofvec) {
            std::cout<<"\n\n"<<x.get_name()<<": "<<std::endl;
            std::cout<<"percent of weight: "<<x.obl_w()*100<<"%"<<std::endl;
            std::cout<<"shipping price: "<<x.obl_w()*ship<<"\n\n";
        for(auto y:x.get_vec())
        {
            //std::cout<<"nazwa: "<<y.get_name()<<std::endl;
            y.display_off();
        }

    }


}


