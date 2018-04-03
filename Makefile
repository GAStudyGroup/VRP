#
#	"sources" folder contains the .cpp files
#	"includes" folder contains the .hpp files
#	
#	Makefile configs
#

CC := g++ -std=gnu++17
CFLAGS := -fsanitize=leak -fsanitize=address -Wall -O3
INC_FOLDER := -I includes
SRC_FOLDER := sources

EXE_OUT := bin/GA

SOURCES := $(shell find $(SRC_FOLDER) -type f -name *.cpp)

all: $(EXE_OUT)
	#@mkdir -p Logs

$(EXE_OUT): $(SOURCES:.cpp=.o)
	@mkdir -p bin
	$(CC) -o $@ $^ $(CFLAGS)

%.o: %.cpp
	$(CC) -c $< $(INC_FOLDER) -o $@ $(CFLAGS)

clean:
	-rm -f $(SRC_FOLDER)/*.o *.d

-include $(SOURCES:.cpp=.d)

%.d: %.cpp
	@g++ $< -MM -MT '$*.o $*.d ' -MD $(INC_FOLDER)
