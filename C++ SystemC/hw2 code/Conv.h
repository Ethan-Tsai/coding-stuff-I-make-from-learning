#include <fstream>
#include <iostream>
#include "systemc.h"

using namespace std;

SC_MODULE(Conv) {
    sc_in<bool> rst;
    sc_in_clk clk;
    sc_out<bool> rom_rd;
    sc_out<sc_uint<7> > rom_addr;
    sc_in<float> data_in;
    sc_out<sc_int<19> > data_out;
    sc_out<bool> data_out_signal;

    void run();

    // vvvvv put your code here vvvvv
    int clock_cycle = 0;

    float bias = 0.0;
    float temp_sum = 0.0;

    float kernel[9] = {};
    float data[30] = {}; /* Only store the data which need to calculate */

    // ^^^^^ put your code here ^^^^^

    SC_CTOR(Conv) {
        SC_METHOD(run);
        sensitive << rst.pos() << clk.pos();
        dont_initialize();
    }
};
