CXX = g++
CXXFLAGS = -Wall -g
SRCS= main.cpp Functions.cpp
main: $(SRCS)
	$(CXX) $(CXXFLAGS) -o S.M.S $(SRCS)

clean:
	rm -f S.M.S
