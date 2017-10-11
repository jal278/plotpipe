#include <vector>
#include "graph.h"

using namespace std;

int main(int argc,char **argv) {
    plot p;
    for(int a=0;a<100;a++) {
        vector<float> x, y;
        for (int k = a; k < a + 200; k++) {
            x.push_back(k);
            y.push_back(k * k);
        }
        p.plot_data(x, y);
    }
    return 0;
}