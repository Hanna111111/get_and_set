#include <iostream>
using namespace std;

class CoffeeGrinder{
    private:
    bool CheckVoltage(){
        return true;
    }
    
    public:
    void Start(){
        bool VoltageIsNormal = CheckVoltage();
        
        if(VoltageIsNormal){
        cout << "Vjuuuuch!" << endl;
        } else {
            cout << "Beep-Beep" << endl;
        }
    }
};

int main()
{
    CoffeeGrinder a;
    a.Start();

    return 0;
}
