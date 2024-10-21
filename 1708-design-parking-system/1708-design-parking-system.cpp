class ParkingSystem {
public:
    map<int , int>m;
    ParkingSystem(int big, int medium, int small) {
        m[0]=big;
        m[1]=medium;
        m[2]=small;
    }
    
    bool addCar(int carType) {
        if(m[carType-1]>0){
            m[carType-1]--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */