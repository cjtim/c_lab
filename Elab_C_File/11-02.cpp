#include <iostream>
using namespace std;

class Animal
{
private:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

Animal::Animal(int happiness, int energy, int fullness){
    this->happiness = happiness;
    this->energy = energy;
    this->fullness = fullness;
    limitStat();
}
void Animal::limitStat(){
    if(happiness < 0){happiness = 0;}
    if(happiness > 100){happiness = 100;}
    if(energy < 0){energy = 0;}
    if(energy > 100){energy = 100;}
    if (fullness < 0){fullness = 0;}
    if (fullness > 100){fullness = 100;}
}
int Animal::getHappiness(){
    return happiness;
}
int Animal::getFullness(){
    return fullness;
}
int Animal::getEnergy(){
    return energy;
}
void Animal::eat(int food){
    if(fullness + food > 100){
        fullness += food;
        happiness -= 10;
    }
    else{
        fullness += food;
    }
    limitStat();
}
void Animal::play(int hour){
    if (energy > 0 && fullness > 0 ){
        energy -= (10* hour);
        fullness -= (20*hour);
        happiness += (5*hour);
    }
    limitStat();
}
void Animal::sleep(int hour){
    energy += (10*hour);
    fullness -= (10*hour);
    limitStat();
}



int main()
{
    Animal a1(100, 100, 100);
    a1.eat(100);
    cout << "Energy : " << a1.getEnergy() << endl;
    cout << "Fullness : " << a1.getFullness() << endl;
    cout << "Happyness : " << a1.getHappiness() << endl;

    a1.play(2);
    cout << endl;
    cout << "Energy : " << a1.getEnergy() << endl;
    cout << "Fullness : " << a1.getFullness() << endl;
    cout << "Happyness : " << a1.getHappiness() << endl;

    a1.sleep(3);
    cout << endl;
    cout << endl;
    cout << "Energy : " << a1.getEnergy() << endl;
    cout << "Fullness : " << a1.getFullness() << endl;
    cout << "Happyness : " << a1.getHappiness() << endl;

}