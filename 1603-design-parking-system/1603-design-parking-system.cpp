class ParkingSystem {
public:
    vector<int> A={0,0,0};
    ParkingSystem(int big, int medium, int small) {
        A[0]=big;
        A[1]=medium;
        A[2]=small;
    }
    
    bool addCar(int carType) {
        if(A[carType-1]==0){
            return 0;
        }
        A[carType-1]--;
        return 1;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */