#include "derivative.h"

vector<char> Derivative::performDerivative(vector<char> formula) {
    bool plusMinus = false;
    
    for (int i = 0; i < formula.size(); i ++) {
        if (formula[i] == '+' || formula[i] == '-') {
            plusMinus = true;
            break;
        }
    }        

    if (plusMinus == true) {
        int arrayStarting = 0;

        for (int i = 0; i < formula.size(); i ++) {
            
    }
    
}

