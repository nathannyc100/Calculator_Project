#include <string>
#include <vector>

using namespace std;

class Parsing {

public:

    vector<char> parse(string formula) {       
        vector<char> output;

        for (int i = 0; i < formula.length(); i ++) {
            if (formula[i] == ' ') {
                continue;
            } else {
                output.emplace_back(formula[i]);
            } 
        }

        return output;
    };

};
