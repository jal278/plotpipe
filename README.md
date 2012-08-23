plotpipe
========

Simple C++ class for quick &amp; dirty real-time plotting via a pipe to gnuplot

Right now it's just a simple header file that allows plotting a vector of one-d or two-d data that can refresh as your program runs. I designed it for scientific computing in mind, but it might be useful in many contexts.

Here's how it's used:


	#include <vector>
	#include "graph.h"
	using namespace std;
	
	int main(int argc,char **argv) {
		plot p;
 		for(int a=0;a<100;a++) {
 			vector<float> x,y;
 			for(int k=a;k<a+200;k++) {
   				x.push_back(k);
   				y.push_back(k*k);
 			}
  			p.plot_data(x,y);
 		}
 		return 0;
	}

This example will just plot a quadratic function, and scroll over time with a moving window over the function.
