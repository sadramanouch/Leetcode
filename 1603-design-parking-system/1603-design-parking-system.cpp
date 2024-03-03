class ParkingSystem {
private:
    int available[4]; // Index 0 is not used, 1 for big, 2 for medium, 3 for small.

public:
    ParkingSystem(int big, int medium, int small) {
        available[1] = big;
        available[2] = medium;
        available[3] = small;
    }
    
    bool addCar(int carType) {
        if (available[carType] > 0) {
            available[carType]--;
            return true;
        }
        return false;
    }
};
