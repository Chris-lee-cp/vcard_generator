################################################################
#  This makefile is written for a GNU make or equivalent.
#  For example:
#   make clean
#   make
#  Copyright  2018, junghoon lee(jhoon.chris@gmail.com)
#               All Rights Reserved.
#
################################################################

vcard_gen : vcard_gen.o
	g++ -o vcard_gen vcard_gen.o -std=c++11

vcard_gen.o : vcard_gen.cpp
	g++ -c vcard_gen.cpp -std=c++11

clean :
	rm vcard_gen vcard_gen.o
