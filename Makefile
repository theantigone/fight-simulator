CC=gcc
SOURCE=src/main.c
TARGET=fight_sim

all: $(SOURCE)
	$(CC) $(SOURCE) -o $(TARGET)

clean:
	rm -f $(TARGET)



