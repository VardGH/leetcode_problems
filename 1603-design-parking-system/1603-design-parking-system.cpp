class ParkingSystem
{
public:
    ParkingSystem(int big, int medium, int small)
        : spaces {big, medium, small}
    {
    }
    
    bool addCar(int carType) 
    {
        if (carType <= 0 || carType > 3 )
            return false;

        if (spaces[carType - 1] > 0) {
            --spaces[carType - 1];
            return true;
        }
        return false;
    }

private:
    std::array<int, 3> spaces;
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */