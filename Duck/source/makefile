cc=g++
exe=main
obj=duck.o FlyNoWay.o FlyWithWings.o MallardDuck.o Quackc.o QuackMute.o QuackSqueak.o

$(exe):$(obj)
	$(cc) -o $(exe) $(obj)
duck.o:duck.cpp
	$(cc) -c duck.cpp
FlyNoWay.o:FlyNoWay.cpp
	$(cc) -c FlyNoWay.cpp
FlyWithWings.o:FlyWithWings.cpp
	$(cc) -c FlyWithWings.cpp
MallardDuck.o:MallardDuck.cpp
	$(cc) -c MallardDuck.cpp
Quackc.o:Quackc.cpp
	$(cc) -c Quackc.cpp
QuackMute.o:QuackMute.cpp
	$(cc) -c QuackMute.cpp
QuackSqueak.o:QuackSqueak.cpp
	$(cc) -c QuackSqueak.cpp
clean:
	rm -rf *.o main
