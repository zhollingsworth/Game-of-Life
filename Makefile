
EXE = gameoflife

SRC = $(wildcard *.c)

OBJ = $(patsubst %.c, %.o, $(SRC))

INC = -I$(CURDIR)

CFLAGS = -Wall -std=gnu99

all: $(EXE)

debug: CFLAGS += -g3 -DDEBUG
debug: all

$(EXE): $(OBJ)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) $(INC) -c $<

clean:
	$(RM) $(OBJ) $(EXE)
