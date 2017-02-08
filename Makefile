all : a.out

clean : a.out
	rm a.out

a.out : *.cpp
	g++ *.cpp
