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
class Bird :public Animal
{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

Bird::Bird(int happiness, int energy, int fullness) :Animal(happiness, energy, fullness){
    happiness = (happiness);
    energy = (energy);
    fullness = (fullness);
}
void Bird::fly(int hour){
    Animal::energy;
}

Animal::Animal(int happiness, int energy, int fullness){
    this->happiness = (happiness);
    this->energy = (energy);
    this->fullness = (fullness);
    limitStat();
}
void Animal::limitStat(){
    if(happiness < 0){happiness = 0;}
    else if(happiness > 100){happiness = MAX_FULLNESS;}
    if(energy < 0){energy = 0;}
    else if(energy > 100){energy = MAX_FULLNESS;}
    if (fullness < 0){fullness = 0;}
    else if (fullness > 100){fullness = MAX_FULLNESS;}
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
    if (food < 0) food = 0;
    else if(fullness + (food) > 100){
        fullness += (food);
        happiness -= 10;
    }
    else{
        fullness += (food);
    }
    limitStat();
}
void Animal::play(int hour){
    if (hour < 0) hour = 0;
    if (energy > 0 && fullness > 0 ){
        energy -= (10 * hour);
        fullness -= (20 * hour);
        happiness += (5 * hour);
    }
    limitStat();
}
void Animal::sleep(int hour){
    if (hour < 0) hour = 0;
    hour = abs(hour);
    energy += (10 * hour);
    fullness -= (10 * hour);
    limitStat();
}



int main()
{
    Animal a1(1000, 1000, 1000);
    a1.play(-5);
    cout << "Energy : " << a1.getEnergy() << endl;
    cout << "Fullness : " << a1.getFullness() << endl;
    cout << "Happyness : " << a1.getHappiness() << endl;

    
    a1.eat(70);
    cout << endl;
    cout << "Energy : " << a1.getEnergy() << endl;
    cout << "Fullness : " << a1.getFullness() << endl;
    cout << "Happyness : " << a1.getHappiness() << endl;

    a1.sleep(5);
    cout << endl;
    cout << endl;
    cout << "Energy : " << a1.getEnergy() << endl;
    cout << "Fullness : " << a1.getFullness() << endl;
    cout << "Happyness : " << a1.getHappiness() << endl;

}