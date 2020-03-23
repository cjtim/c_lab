#include <iostream>
using namespace std;

class Transportation
{
public:
    virtual double fare() = 0;
};

class Taxi  :public Transportation
{
private:
    double price = 35;
public:
    Taxi(){
    }
    void setDistance(double km){
        price += km*2;
    }
    double fare(){
        return price;
    }
};

class BmtaBus  :public Transportation
{
private:
    double price = 6.5;
public:
    // BmtaBus(){}
    double fare(){
        return price;
    }
};

class BTS  :public Transportation
{
private:
    double price = 15;
public:
    void setStation(int station){
        price += station*5;
    }
    double fare(){
        return price;
    }
};

class Passenger
{
private:
    double total = 0;
public:
    void addTransportation(Transportation &t){
        total += t.fare();
    }
    double getTotalFare(){
        return total;
    }
};

int main()
{
    Passenger passenger;
    while(1) {
        char transportType;
        cin >> transportType;
        if (transportType == 'A') {
            Taxi *taxi = new Taxi();
            double distance;
            cin >> distance;
            taxi->setDistance(distance);
            passenger.addTransportation(*taxi);
            

        } else if (transportType == 'B') {
            BmtaBus *bus = new BmtaBus();
            passenger.addTransportation(*bus);
            

        } else if (transportType == 'C') {
            BTS *bts = new BTS();
            int station;
            cin >> station;
            bts->setStation(station);
            passenger.addTransportation(*bts);
            

        } else {
            break;
        }
    }
    cout << "Total Fare: " << passenger.getTotalFare() << endl;
}