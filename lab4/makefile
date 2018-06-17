all: lab

cc=g++ -std=c++11 

src= *.cpp

iflags =-Wall -I /home/debian/fltk-1.3.3/ `fltk-config --cxxflags --ldflags --use-cairo`

lab: $(src)
	$(cc) $(src) $(iflags) -o lab
